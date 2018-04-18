#ifndef CONTROLEDEGASTOS_H_
#define CONTROLEDEGASTOS_H_

#include "despesas.h"
#include <vector>

using namespace std;

class ControleDeGastos{

	vector<Despesa> despesas(5);
	void setDespesas(Despesa d);
	double calculaTotalDeDespesas();
	std::string existeDespesaDoTipo();
};
#endif /* CONTROLEDEGASTOS_H_ */