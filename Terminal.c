#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void) {
	int estado;
	char programa[20];
	printf ("Ingresa alguno de los siguientes programas \n");
	printf ("printPpid -Imprime la id del proceso padre");
	printf ("\nprintPid -Imprime la id del proceso hijo");
	printf ("\nprintGroup -Imprime la informacion del grupo del proceso");
	printf ("\nprintSesion -Imprime la informacion de la sesion");
	printf ("\nprintUser -Imprime la informacion del usuario que ejecuto el proceso");
	printf ("\nprintSerieFibonacci -Imprime el elemento n de la serie fibonacci");
	printf("\nO ingresa 0 para salir\n\n");
	printf ("~");
	scanf("%s", programa);
	while (programa[0] != '0') {
		if (fork() == 0) {
			estado = execl(programa,0);
			printf ("Error en %s => %d\n", programa, estado);
			_exit (1);
		} else {
			wait(&estado);
			printf ("\n~");
			scanf("%s", programa);
		}
	}
}
