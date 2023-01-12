#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int status;
	pid_t pid_figlio;
	printf("S1 (p1) - pid = %d\n", getpit());
	printf("fork esterna - \n");
	if ((pid_figlio = fork()) == -1){
		printf("fork non riuscita");
	else if (pid_figlio == 0){
		printf("f1: pid = %d, pd pid = %d\n");
		ramo34();
	}
}

ramo34(){
	int status;
	pid_t pid4;
	printf("fork - processi p34 -> creazione P4\n");
	if ((pid4 = fork()) == -1){
		printf("fork non riuscita");
	}
	if (pid4 == 0){
		printf("S4 (f2) - pid = %d, padre pid = %d\n", getpid(), getppid());
	}
	else {
		printf("S3 (p2) - pid = %d, padre pid = %d\n", getpid(), getppid());
		printf("wait fine ramo P4 (padre2 join filgio2)\n");
		wait(pid4, &status, 0);
		printf("fine attesa P4\n ");
		printf("fine ramo P34\n");
	}
	exit(0);
}
