#ifndef DESPESAs_H_
#define DESPESA_H_

class Despesa {
	private:
		double valor;
		std::string tipoDeGasto;
	public:
		Despesa();
		Despesa(double, std::string);
		double getValor();
		std::string getTipoDeGasto();
		void setValor(double v);
		void std::string setTipoDeGasto(std::string tipo);
};

#endif /* DESPESAS_H_ */