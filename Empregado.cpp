#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  

  public:
     double getSalarioHora() {return _salarioHora;}

     double getQuotaMensalVendas() {return _quotaMensalVendas;}

     double get_horasTrabalhadas() {return _horasTrabalhadas;}

    std::string getNome(){return _nome;}

    double getsalarioMes() {return salarioMes;}

    void imprime();

     double setSalarioHora(double SSH ) {
       _salarioHora = SSH;
       return _salarioHora;
     }

     double setQuotaMensalVendas(double QMV) {
       _quotaMensalVendas = QMV;
       return _quotaMensalVendas;
     }

     double set_horasTrabalhadas(double SHT ) {
       _horasTrabalhadas= SHT;
       return _horasTrabalhadas;
     }

  std::string setNome(std::string nome){
    _nome = nome;
  return _nome;
  }

    void pagamentoMes(double _horasTrabalhadas) {
 
      double t = _horasTrabalhadas;
      const double  HorasBase = 8; 
      
      if (_horasTrabalhadas > HorasBase) {
        double x = _horasTrabalhadas - HorasBase;
        t += x / 2;
      }
	  salarioMes =  t * _salarioHora;
    }

    private:
    std::string _nome;
    double _salarioHora;  
    double _horasTrabalhadas;
    double _quotaMensalVendas; 
    double salarioMes;

	
};

#endif
