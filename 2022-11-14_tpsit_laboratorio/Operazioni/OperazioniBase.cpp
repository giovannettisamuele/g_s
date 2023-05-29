// File: OperazioniBase.cpp
// Contiene le implementazioni dei metodi del file OperazioniBase.h
#include "pch.h"
#include "OperazioniBase.h"             //per includere i prototipi
OperazioniBase::OperazioniBase() {}
int OperazioniBase::Somma(int num1, int num2) {
	return num1 + num2;
}
int OperazioniBase::Differenza(int num1, int num2) {
	return num1 - num2;
}
int OperazioniBase::Moltiplicazione(int num1, int num2) {
	return num1 * num2;
}
int OperazioniBase::Divisione(int num1, int num2) {
	return num1 / num2;
}
OperazioniBase::~OperazioniBase() {}
