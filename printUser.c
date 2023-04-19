#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
uid_t uid=getuid();
printf("La ID numerica del usuario actual es: %5d",uid);
printf("\n");
return 0;
}
