#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

ControleDeGastos::ControleDeGastos();

void ControleDeGastos::setDespesas(Despesa d){
	Despesa = d;
}

double ControleDeGastos::calculaTotalDeDespesas(){
	double soma = 0;

	for(i = 0; i < despesas.size(); i++){
		soma+= despesas(i);
	}
	return soma;
}
std::string ControleDeGastos::existeDespesaDoTipo(std::string t){
	cout << "Existe despesa do tipo: " << endl
	if (t == "comida")
	{
		return cout << "comida" << endl;
	}
	if (t == "casa")
	{
		return cout << "casa" << endl;
	}
	if (t == "lazer")
	{
		return cout << "lazer" << endl;
	}
}