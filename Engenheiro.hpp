#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {


//modfiquei os operadores e implementei gets
  public:
  Engenheiro( std::string nome, double salarioH, int projetos, double Hrtraba);
    void imprime();

  std::string getNome();
  
    int getProjetos();

    private:

        std::string _nome;  
	    int _projetos;
    
	
};

