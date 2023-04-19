#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
printf("Proceso Hijo ID: %5d",getpid());
printf("\n");
return 0;
}
