#include <iostream>
using namespace std;



int main (void){

	//Dichiariamo le variabili
	long long valore;

	string b;
	b="";

	//facciamo inserire all'utente il numero decimale che vuole convertire 
	cout<<"Quale numero vuoi convertire?    ";
	cin>>valore;

	//Costruiamo in ciclo while
	while (valore>0){

		//Dove se non c'� resto il valore di b corrisponde a 0
		if (valore%2==0)
		    b = '0' + b;

		//Invece se c'� resto il valore di b corrisponde a 1
		else
		    b = '1' + b;
		//Finch� il valore � positivo lo dividiamo per 2
		valore = valore / 2;
	}
	cout<<b;
}

