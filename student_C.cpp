#include <iostream>
#include "string.h"
#include <stdbool.h>


// empty() Returns whether the string is empty (i.e. whether its length is 0).
// true if the string length is 0, false otherwise.
bool string::empty() const{
  int size_= this->length();
  return size_==0;
}

//capacity() Returns the size of the storage space currently allocated for the string, expressed in terms of bytes.
size_t string::capacity() const {
	return _cap;
}

// reserve() If n is greater than the current string capacity, the function causes
// the container to increase its capacity to n characters (or greater).
void string::reserve(size_t n) {
	if (_cap < n) {
		setCapacity(n-1);
	}
}


// operator=(const char*)
string& string::operator=(const char* c){
  delete p;
  p = new char[100];         //le pointeur pointe vers un nouveau tableau initialié à 100 de taille
  int i=0;
  while (c[i]!='\0'){        //on parcourt le tableau de char vers lequel pointe c
    p[i]=c[i];               // on copie dans p chaque élement du tableau vers lequel pointe c
    i+=1;
  }
  int size = i;             // taille du tableau vers lequel pointait c au début
  p[size]='\0';
  this->resize(size, '\0');
  this->setCapacity(size);   // on modifie la capacité du tableau pour qu'elle soit adaptée à la taille du string
  return *this;
  }


//operator+(const string&, const string&)
string operator+(const string& a, const string& b){
  int size_a=a.size();
  int size_b=b.size();
  if (size_a+size_b <100){                      // si la somme des tailles de a et b est inférieur à max_size=100
  char* p = new char[size_a+size_b];            //on initialise un tableau de capacité taille de a + taille de b
  for (int i=0; i!=size_a; ++i){                // on copie chaque élement de a dans p
    p[i]=a.c_str()[i];
  //  std::cout <<"p"<< i <<": "<<p[i]<<std::endl;
  }
  for (int j=size_a; j!=size_a+size_b; ++j){   // on copie à la suite chaque élement de b dans p
    p[j]=b.c_str()[j-size_a];
  //  std::cout <<"p"<< j <<": "<<p[j]<<std::endl;
  }
  p[size_a+size_b]='\0';
  string result(p);                            // on crée un nouveau string à partir de notre pointeur p
  result.setCapacity(size_a+size_b);           // on pense à bien modifier la capacité de notre tableau
  delete[] p;                                  // on élimine p
  return result;
 }
 else{
   std::cout<<"Size max atteinte"<<std::endl;    //si la somme des tailles de a et b est supérieur à max_size=100
   char*p = new char[100];
   for (int i=0; i!=size_a; ++i){                // on copie chaque élement de a dans p
       p[i]=a.c_str()[i];
  }
   for (int j=size_a; j!=100; ++j){              // on copie chaque élement de b jusqu'à atteinte max_size
    p[j]=b.c_str()[j-size_a];
   }
   p[100]='\0';
   string result(p);
   result.setCapacity(100);
   delete[] p;
   return result;                                   // la fonction renvoie que la taille maximale est atteinte
 }
}
