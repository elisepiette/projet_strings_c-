#include <iostream>
#include "string.h"

int main(){

  //test constructeur
  string a;
  string b("exemple");
  string c(b);
  std::cout << "a: " << a.get_str() << " of length "<<a.get_len()<<std::endl;
  std::cout << "b: " << b.get_str() << " of length "<<b.get_len()<<std::endl;
  std::cout << "c: " << c.get_str() <<" of length "<<c.get_len()<<std::endl;
  string d=c.resize(2,'+');
  std::cout << "d: " << d.get_str()<<" of length "<<d.get_len()<<std::endl;
  std::cout << "c: " << c.get_str() <<" of length "<<c.get_len()<<std::endl;

  return 0;
}
