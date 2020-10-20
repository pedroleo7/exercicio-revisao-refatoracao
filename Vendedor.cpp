#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {



  public:
  	Vendedor(std::string nome, double salhora, double quota){
		  setNome(nome);
		  setSalarioHora(salhora);
		  setQuotaMensalVendas(quota);
	  };
	
	void imprime(){
	std::cout << "Nome: " << getNome << std::endl;
  	std::cout << "Salario Mes: " << getsalarioMes() << std::endl;  
  	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  	std::cout << std::endl;
	}

    double quotaTotalAnual() {
	  return  getQuotaMensalVendas() * 12;
	}

	private:

      	  
	
	
	
};


