#include<unistd.h>
#include<stdio.h>

int main(){
	printf("\nPrueba de procesos:\n");

	fork();
	int padre = getppid();
	int id = getpid();
	printf("\tSe ha creado un proceso: padre=%i, yo=%i\n",padre,id);

	return 1;
}

