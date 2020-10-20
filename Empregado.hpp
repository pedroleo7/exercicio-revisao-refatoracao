#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:

    double setSalarioHora(double SSH );
    double getSalarioHora() ;

    double getQuotaMensalVendas() ; 
    double setQuotaMensalVendas(double QMV) ;

    double get_horasTrabalhadas() ;
    double set_horasTrabalhadas(double SHT ) ;
    
    void imprime();

    std::string setNome(std::string nome);
    std::string getNome();

    void pagamentoMes(double _horasTrabalhadas) ;

    double getsalarioMes() ;

    //mudei para privado as variaveis
    private:
    std::string _nome;
    double _salarioHora;  
    double _horasTrabalhadas;
    double _quotaMensalVendas; 
    double salarioMes;

};

#endif
