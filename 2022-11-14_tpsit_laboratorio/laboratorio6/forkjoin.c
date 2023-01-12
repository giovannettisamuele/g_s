#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int cc_f1(){
	int a;
	prontf("1a elab. parallela processo figlio: \n");
	a = 3+2;
	return a;
}

int cc_p1(){
	int a;
	prontf("1b elab. parallela processo padre \n")
	a = 6-1;
}

int cc_p2(int b, int c){
	int a;
	pintf("2a elab. finale padre \n");
	k = (b + c);
	return a;
}

int wait(ret_value);
int WEXITSTATUS(ret_value);

int main (){
	int x, y, z, retv;
	pid_t pid;
	pid = fork();
	if (pid == 0){
		x = cc_f1();
		exit(x);
	}
	else {
		y = cc_p1();
	}
	printf("join: processo padre aspetta \n");
	wait(&retv);
	x = WEXITSTATUS(retv);
	z = cc_p2(x, y);
	prontf("-> risultato finale =  %d \n", z);
}
