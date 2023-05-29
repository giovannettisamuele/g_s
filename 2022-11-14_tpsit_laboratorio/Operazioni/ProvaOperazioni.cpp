#include "stdafx.h"
#include "ProvaOperazioni.h"
#include <cmath>

ProvaOperazioni::ProvaOperazioni(){}

ProvaOperazioni::~ProvaOperazioni(){}

int ProvaOperazioni::Somma(int num1, int num2) {
	return num1 + num2;
}
int ProvaOperazioni::Differenza(int num1, int num2) {
	return num1 - num2;
}
int ProvaOperazioni::Moltiplicazione(int num1, int num2) {
	return num1 * num2;
}
int ProvaOperazioni::Divisione(int num1, int num2) {
	return num1 / num2;
}
float ProvaOperazioni::RadiceQuadrata(float num1)
{
	return sqrt(num1);
}
