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

  std::cout<<"------ Tests Constructeur ------ "<<std::endl;
  string b;
  std::cout << "b: " << b.c_str() << " of length "<< b.size()<< " and capacity "<<b.capacity()<<std::endl;
  string a("exemple");
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< " and capacity "<<a.capacity()<<std::endl;
  string c(a);
  std::cout << "c: " << c.c_str() << " of length "<<c.size()<<" and capacity "<<c.capacity()<<std::endl;

  std::cout<<"------ Tests StudentA ------ "<<std::endl;
  const char* new_p=a.c_str();
  std::cout << "nouveau pointeur : " << new_p<<std::endl;
  c.clear();
  std::cout << "Apres clear, c: " << c.c_str() << " of length "<<c.size()<<std::endl;
  std::cout << "Apres clear, a: " << a.c_str() << " of length "<<a.size()<<std::endl; //on a bien b intact

  string c1;
  c1='x';
  std::cout << "c1 (test operateur=): " << c1.c_str() << " of length "<<c1.size()<<std::endl;
  string e(" sympa");
  std::cout << "e: " << e.c_str() << " of length "<<e.size()<<std::endl;
  const char* new_p2=e.c_str();

  string d;
  d=a+new_p2;
  //d.clear();
  std::cout << "d (test operateur+): " << d.c_str() << " of length "<<d.size()<<" and capacity "<<d.capacity()<<std::endl;

  std::cout<<"------ Tests resize ------ "<<std::endl;

  string x;
  x=a.resize(3,'a');
  //x.resize(3,'a');
  std::cout << "x prend la valeur a resized à 3: " << x.c_str() << " of length "<<x.size()<<std::endl;
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< std::endl;
  x.resize(10,'o');
  std::cout << "x: " << x.c_str() << " of length "<<x.size()<<std::endl;

  std::cout<<"------ Tests student C ------ "<<std::endl;

  string s1="Hello";
  string s2="Woorld";
  string sum=s1+s2;
  std::cout << sum.c_str()<<" of size "<<sum.size()<<std::endl;

  std::cout<<"------ Tests operator+(string,char) ------ "<<std::endl;


  string y("j'ecris en C+");
  y=y+'+';
  std::cout <<"y: "<<y.c_str()<<" of length "<<y.length()<<std::endl;
  std::cout <<"max size de y: "<<y.max_size()<<std::endl;
  s1=s2;
  std::cout <<"s1 (test operator= B): "<<s1.c_str()<<" of length "<<s1.length()<<std::endl;


  std::cout<<"------ Tests capacity ------ "<<std::endl;
  string e1("csympa");
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;
  e1.setCapacity(5);
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;
  e1.reserve(101);
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;
  e1.reserve(70);
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;
  e1._increasecap(20);
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;
  e1._increasecap(40);
  std::cout <<"e1: "<<e1.c_str()<<" of capacity "<<e1.capacity()<<std::endl;

  return 0;

}
