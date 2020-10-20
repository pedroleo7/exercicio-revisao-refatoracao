#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp" 

class Engenheiro : public Empregado {

//modfiquei os operadores e implementei gets
  public:
 Engenheiro( std::string nome, double salarioH, int projetos, double Hrtraba){
      setNome(nome);
      setSalarioHora(salarioH);
      _projetos = projetos;
      set_horasTrabalhadas(Hrtraba); 
}
  void imprime(){
    std::cout << "Nome: " << getNome << std::endl;
  std::cout << "Salario Mes: " << getsalarioMes<< std::endl;
  std::cout << "Projetos: " << _projetos << std::endl;
  std::cout << std::endl;
  }
  
    int getProjetos(){
      return _projetos;
    }

    private:  
	  int _projetos;
    
	
};

