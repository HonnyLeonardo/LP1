#include <iostream>
#include "Despesa.h"

using namespace std;

Despesa::Despesa(){	
	valor = 1;
	tipoDeGasto = "vazio";
}

Despesa::Despesa(double v, std::string tipo){
	valor = v;
	tipoDeGasto = tipo;

	if(verificaValor() == false){
		cout << "Valor invalido" << endl;
		valor = 1;
	}
}

double Despesa::getValor(){
	return valor;
}

std::string Despesa::getTipoDeGasto(){
	return tipoDeGasto;
}

void Despesa::setValor(){
	valor = v;
}
void Despesa::string setTipoDeGasto(){
	tipoDeGasto = tipo;
}

bool Despesa::verificaValor(){
	if(valor < 0){
		return false;
	}
	else{
		return true;
	}
}