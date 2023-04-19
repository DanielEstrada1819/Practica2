#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int Id;
Id=getpid();
printf("El PGID del proceso actual es: %5d",getpgid(Id));
printf("\n");
return 0;
}
