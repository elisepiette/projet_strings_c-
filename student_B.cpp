/*
method to write for student B:

length()
max_size(): returns the maximum number of characters
resize(size_t, char): changes the number of characters stored
operator=(const string&):  assigns values to the string
operator+(const string&, char):  concatenates a string and a char

*/

#include<iostream>
#include "string.h"
#include <stdio.h>
#include <cstring>

string& string::resize(int size, char c){
  if (size<this->size()){
    /* the current value is shortened to its first n character,
      removing the characters beyond the nth*/
    this->p[size]='\0';
  }else{

    /*the current content is extended by inserting at the end as many characters as needed to reach a size of n.
    the new elements are initialized as copies of c,
    otherwise, they are value-initialized characters (null characters).*/
    if (size>_maxsize){
      size=_maxsize;
    }

    char* s= new char[this->capacity()]; //on crée un nouveau tableau de la taille cible
    int siz = this->size(); // on enregistre la taille dans une variable
    memcpy(s,p,this->size());  // on stocke l'attribut p dans s
    delete (p); // on supprime l'attribut initiale pour pouvoir reallouer un espace
    p=new char[size+1];
    this->reserve(size+1);
    int i=0;
    for(i; i<siz;i++){
      p[i]=s[i]; //on copie s dans le nouveau p
    }
    while (i<size){
      this->p[i]=c; // on ajoute le caractere autant de fois qu'il faut pour atteindre size
      i++;
    }
    this->p[i]='\0'; //ajout du dernier caractere
    delete[] s; //delete l'objet créé s
  }

  return *this;
}

int string::length() const{
  int i =0;
  while (p[i]!='\0'){
    i+=1;
  }
  return i;
}

int string::max_size(){
  return _maxsize; //maxsize est un attribut fixe
}


string& string::operator= (const string& str){
  delete (p); //on supprime p avant de reallouer de l'esapce
  p=new char[str.size()]; //on créé un nouveau p de la taille du str à copier
  int i=0;
  for(i=0;i<str.size();i++){
    this->p[i]=str.p[i]; //on copie str pour chaque caractère

  }
  this->p[i]='\0'; //ajout du dernier caractère
  setCapacity(str.size());
  return *this;
}

string operator+(const string& str, char c){
  if (str.size() <100){
    char* a=new char[str.size()+1]; //
    int i=0;
    while (i<str.size()){
      a[i]=str.get_char(i); //on récupère chaque char du tableau de str (string const)
      i++;
    }
    a[i]=c; // le dernier caractère est le char à rajouter
    a[i+1]='\0'; //ajout du dernier caractère
    string b(a); //on copie a
    delete[] a; //on delete a
    //std::cout<<"operateur de studentB"<<std::endl;
    return b; //on retourne la la copie de a
  }else{
    std::cout<<"size max atteinte"<<std::endl;
    string b(str);
    return b;
  }
}
