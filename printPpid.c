#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int pid;
int idhijo;
printf("Proceso Padre ID: %5d",getppid());
printf("\n");
return 0;
}

