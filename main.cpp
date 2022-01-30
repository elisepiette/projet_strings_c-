#include <iostream>
#include "string.h"
#include <stdbool.h>

int main(){
  std::cout.setf(std::ios::boolalpha);
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
  //Constructeur défault et test de size() et capacity()
  string b;
  std::cout << "b: " << b.c_str() << " of length "<< b.size()<< " and capacity "<<b.capacity()<<std::endl;

  //Constructeur à partir d'un c-string
  string a("exemple");
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< " and capacity "<<a.capacity()<<std::endl;

  //Constructeur copy
  string c(a);
  std::cout << "c: " << c.c_str() << " of length "<<c.size()<<" and capacity "<<c.capacity()<<std::endl;






  std::cout<<"------ Tests StudentA ------ "<<std::endl;

  // Fonction c_str()
  const char* new_p=a.c_str();
  std::cout << "nouveau pointeur : " << new_p<<std::endl;

  //Fonction clear()
  c.clear();
  std::cout << "Apres clear, c: " << c.c_str() << " of length "<<c.size()<<std::endl;
  std::cout << "Apres clear, a: " << a.c_str() << " of length "<<a.size()<<std::endl; //on a bien b intact

  //Operateur=(char)
  string c1;
  c1='x';
  std::cout << "c1 (test operateur=): " << c1.c_str() << " of length "<<c1.size()<<std::endl;

  //Operateur+(const string&, const char*)
  string e(" sympa");
  std::cout << "e: " << e.c_str() << " of length "<<e.size()<<std::endl;
  const char* new_p2=e.c_str();
  string d;
  d=a+new_p2;
  //d.clear();
  std::cout << "d (test operateur+): " << d.c_str() << " of length "<<d.size()<<" and capacity "<<d.capacity()<<std::endl;






  std::cout<<"------ Tests StudentB ------ "<<std::endl;

  //Fonctions resize() et length()
  string x;
  x=a.resize(3,'a');
  //x.resize(3,'a');
  std::cout << "x prend la valeur a resized à 3: " << x.c_str() << " of length "<<x.size()<<std::endl;
  std::cout << "a: " << a.c_str() << " of length "<< a.size()<< std::endl;
  x.resize(10,'o');
  std::cout << "x: " << x.c_str() << " of length "<<x.size()<<std::endl;

  //Operateur+(const string&, char)
  string y("j'ecris en C+");
  y=y+'+';
  std::cout <<"y: "<<y.c_str()<<" of length "<<y.length()<<std::endl;

  //Fonction max_size()
  std::cout <<"max size de y: "<<y.max_size()<<std::endl;

  //Operateur=(const string&)
  string s1="Hello";
  string s2="Woorld";
  s1=s2;
  std::cout <<"s1 (test operator= B): "<<s1.c_str()<<" of length "<<s1.length()<<std::endl;





  std::cout<<"------ Tests StudentC ------ "<<std::endl;

  //Operateur=(const char*)
  string s3;
  s3="Moonriver is a song";
  std::cout << "s3: " << s3.c_str() << " of length "<< s3.size()<< std::endl;

  //Operateur+(const string&, const string&)
  string sum=s1+s2;
  std::cout<< "Test de l'operator+(const string& a, const string& b) : "<<std::endl;
  std::cout << sum.c_str()<<" of size "<<sum.size()<<std::endl;

  //Fonction empty()
  std::cout<< sum.c_str() <<" is empty: "<<sum.empty()<<std::endl;
  sum.clear();
  std::cout<< "But after clearance it's empty :  "<<sum.empty()<<std::endl;

  //Fonctions capacity() and reserve()
  string final;
  std::cout<<"A string created by default has a capacity of "<< final.capacity()<<std::endl;
  final="How are you?";
  std::cout<<"The string "<< final.c_str()<<" has a capacity of "<< final.capacity()<<std::endl;
  final.reserve(25);
  std::cout<<"After reserving,the string "<< final.c_str()<<" has a capacity of "<< final.capacity()<<std::endl;


  return 0;

}
