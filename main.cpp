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
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< std::endl;
  const char* new_p=a.c_str();
  std::cout << "nouveau pointeur : " << new_p<<std::endl;
  //string b(a); //ATTENTION crée pointeur vers le même objet
  //std::cout << "b: " << b.c_str() << " of length "<<b.size()<<std::endl;
  //b.clear();
  //std::cout << "Apres clear, b: " << b.get_str() << " of length "<<b.size()<<std::endl;
  //std::cout << "Apres clear, a: " << a.get_str() << " of length "<<a.size()<<std::endl;

  string c;
  c='x';
  std::cout << "c: " << c.c_str() << " of length "<<c.size()<<std::endl;
  string e(" sympa");
  std::cout << "e: " << e.c_str() << " of length "<<e.size()<<std::endl;
  const char* new_p2=e.c_str();

  string d;
  d=a;
  //d=a+new_p2;
  //d.clear();
  std::cout << "d: " << d.c_str() << " of length "<<d.size()<<std::endl;
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< std::endl;

  string x("exemple");
  x.resize(3,'a');
  std::cout << "x: " << x.c_str() << " of length "<<x.size()<<std::endl;
  x.resize(10,'o');
  std::cout << "x: " << x.c_str() << " of length "<<x.size()<<std::endl;

  std::cout<<"------ Tests student C ------ "<<std::endl;
/*  string t;
  t="Hola ";
  std::cout<<t.c_str()<<std::endl;
  std::cout<<t.size()<<std::endl;
*/

  string s1="Hello";
  string s2="World";
  string sum=s1+s2;
  std::cout << sum.c_str()<<" of size "<<sum.size()<<std::endl;
  return 0;

}
