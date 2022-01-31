#include<iostream>
#include "string.h"

/* method to write for student_A :
c_str() : Returns a pointer to an array that contains a null-terminated sequence of characters
(i.e., a C-string) representing the current value of the string object.
size() : Returns the length of the string.

clear(): Erases the contents of the string, which becomes an empty string (with a length of 0 characters)
operator= : Assigns a new value to the string, replacing its current contents.
operator+ : Returns a newly constructed string object with its value being the concatenation of the characters in str followed by those of a.
*/

const char* string::c_str() const{
  return p; //retourne le pointeur associé au tableau
}


size_t string::size() const{
  int i =0; //on initialise un compteur à 0
  while (p[i]!='\0'){ //s'incrémente jusqu'à ce qu'il tombe sur le caractère de fin
    i+=1;
  }
  return i;
}

void string::clear(){
  p[0]='\0';  //la première case du tableau devient le caractère de fin ce qui supprime le reste
}

string& string::operator= (char c){
  delete p; //on supprime avant d'allouer à nouveau (gestion des memory leaks)
  p = new char[2];
  p[0]=c;
  p[1]='\0';
  setCapacity(2);
  return *this;
}

string operator+ (const string& str, const char* a){

  int i =0; //on initialise le compteur
  while (a[i]!='\0'){ //on calcule la taille du tableau a
    i+=1;
  }
  int b=str.size(); //on récupère la taille de str
  int size=i+b;

  if (size >100){
    size=100;
  }

  char* add=new char[size]; //on crée un tableau qui va stocker les deux paramètres

  for (int j=0;j<b;j++){ //copie du premier paramètre
    add[j]=str.get_char(j);
  }

  int k=0;

  for (int j=b;j<size;j++){ //copie du 2ème paramètre
    add[j]=a[k];
    k+=1;
  }
  add[size]='\0';
  string final(add);
  delete[] add; //on n'oublie pas de supprimer avant la fin de la fonction
  //std::cout<<"operateur de studentA"<<std::endl;
  return final;

}
