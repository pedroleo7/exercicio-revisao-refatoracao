#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor(std::string nome, double salhora, double quota);

    double quotaTotalAnual();
    void imprime();

  private:
	
};
