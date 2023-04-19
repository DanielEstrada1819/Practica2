#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int n,i;
printf("\nIngresa el valor de n: ");
scanf("%d", &n);
int fib[n];
fib[0]=0;
fib[1]=1;

for(i=2;i<=n;i++)
{
   fib[i]= fib[i-1] + fib[i-2];
}
printf("\n El elemento %d de la serie de fibonacci es: %d\n",n,fib[n-1]);
return 0;
}
