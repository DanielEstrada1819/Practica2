#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int Id;
Id=getpid();
printf("La idenificacion numerica de sesion es: %5d",getsid(Id));
printf("\n");
return 0;
}
