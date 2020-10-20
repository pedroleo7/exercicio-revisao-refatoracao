#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35,3,9.5);
  eng1.imprime();

  
  Engenheiro eng2= Engenheiro("Daniela Targarye", 30, 1, 8);
  eng2.imprime();
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30,2,8);
  eng3.imprime();
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20,5000);
  vend1.imprime();
  
  Vendedor vend2 = Vendedor("Jose Mormont", 25,3000);
  vend2.imprime();
	
  Vendedor vend3 = Vendedor("Sonia Stark", 30,4000);
  vend3.imprime();
 
  
  return 0;	
}
