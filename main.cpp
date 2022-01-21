#include <iostream>
#include "string.h"

int main(){

  //test constructeur
  /*string a;
  string b("exemple");
  string c(b);
  std::cout << "a: " << a.get_str() << " of length "<<a.get_len()<<std::endl;
  std::cout << "b: " << b.get_str() << " of length "<<b.get_len()<<std::endl;
  std::cout << "c: " << c.get_str() <<" of length "<<c.get_len()<<std::endl;
  string d=c.resize(2,'+');
  std::cout << "d: " << d.get_str()<<" of length "<<d.get_len()<<std::endl;
  std::cout << "c: " << c.get_str() <<" of length "<<c.get_len()<<std::endl;*/

  string a("exemple");
  std::cout << "a: " << a.get_str() << " of length "<< a.size()<< std::endl;
  const char* new_p=a.c_str();
  std::cout << "nouveau pointeur : " << new_p<<std::endl;
  string b(a); //ATTENTION crée pointeur vers le même objet
  std::cout << "b: " << b.get_str() << " of length "<<b.size()<<std::endl;
  //b.clear();
  //std::cout << "Apres clear, b: " << b.get_str() << " of length "<<b.size()<<std::endl;
  //std::cout << "Apres clear, a: " << a.get_str() << " of length "<<a.size()<<std::endl;
  string c;
  c='x';
  std::cout << "c: " << c.get_str() << " of length "<<c.size()<<std::endl;
  string e("sympa");
  const char* new_p2=e.c_str();
  string d;
  d=a+new_p2;
  std::cout << "d: " << d.get_str() << " of length "<<d.size()<<std::endl;
  return 0;
}
