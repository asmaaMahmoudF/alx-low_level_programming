#include "main.h"

void close_file(int fd)
{
    if(close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}
void intiat_struct(copy_struct *cpy, int **argv)
{
    if (cpy == NULL || argv == NULL)
        return;
    
    cpy->from = argv[1];
    cpy->to = argv[2];
    cpy->buffer = malloc(sizeof(copy_struct));

    if (cpy->buffer == NULL)
        exit(-1);
}
void coyfun(copy_struct *cpy)
{
    cpy->from_file = open(cpy->from,O_RDONLY);
    if (cpy->from_file < 0)
    {
        dprintf(STDERR_FILENO,"Error: Can't read from file ");
        exit(98);
    }
    
    cpy->to_file = open(cpy->to, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH); 
    
    if (cpy->to_file < 0)
    {
        dprintf(STDERR_FILENO,"Error: Can't write to ");
        exit(99);
    }
    form_to(cpy);  
    close_file(cpy->from_file);
    close_file(cpy->to);  
}
void from_to(copy_struct *cpy)
{
    cpy->rd = 1;
    while(cpy->rd)
    {
        cpy->rd = read(cpy->from, cpy->buffer, 1024);
		if (cpy->rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cpy->from);
			exit(98);
		}
        cpy->wt = write(cpy->to_file, cpy->buffer, cpy->rd);
		if (cpy->wt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cpy->to);
			exit(99);
		}
    }
}
int main(int argc, int **argv)
{
    copy_struct *command;
    if (argc != 3)
    {
        dprintf(STDERR_FILENO,"Usage: cp file_from file_to");
        exit(97);
    }
    if (argv[1] == NULL)
    {
        dprintf(STDERR_FILENO,"Error: Can't read from file ");
        exit(98);
    }
    if (argv[2] == NULL)
    {
        dprintf(STDERR_FILENO,"Error: Can't write to ");
        exit(99);
    }
    command = malloc(sizeof(copy_struct));

    intiat_struct(command,argv);
    coyfun(command);

    return(0);
}