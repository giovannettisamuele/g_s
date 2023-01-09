#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void mettiSpazi(int quanti){ //per meglio vedere la gerarchia
int x;
for (x=0; x <= quanti; x++)
printf(" ");
{
void faiFiglio (int quanti){
int pid;
pid = fork();
if (pid == 0){
mettiSpazii(quanti);
printf(" Sono il processo figlio con pid:%d. ", getpid() );
printf( "il mio papi ha pid: %d\n" , getpid() );
if (quanti > 0)
faifiglio(quanti - 1);          //il figlio diventa padre

else 
      exit(0);
}

else{
  mettiSpazi(quanti);
    printf("Sono il processo padre con pid:%d, \n"getpid() );
}
}
