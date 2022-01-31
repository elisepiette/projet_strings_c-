#include<iostream>
#include <cstring>
#include "string.h"

string::string(){
  p=new char[1];
  p[0]='\0';
  setCapacity(1);
  //std::cout<<"Je suis un string nul"<<std::endl;
}

string::string(const string& s){
  int i = s.size();
  p = new char[i];
  int size=i;
  memcpy(p,s.c_str(), size);
  setCapacity(size);
}


string::string(const char* str){
  int j =0; //on initialise une compteur à 0
  while (str[j]!='\0'){ //on compte le nombre d'élément dans la cible str
    j+=1;
  }
  if (j>_maxsize){
    std::cout<<" Vous avez essayé de créer un string de taillle: "<<j<<" >_maxsize = 100"<<std::endl;
    j=_maxsize;
  }
  p = new char[j]; //on initialise notre string à la taille de str
  this->setCapacity(j);
  int i=0;
  while (str[i]!='\0' && i<_maxsize){
    p[i]=str[i]; //on copie chaque valeur de str
    i+=1;
  }
  this->p[i]='\0';//ajout du denrier caractere

  //std::cout<<"Je suis un string construit à partir d'un pointeur"<<std::endl;
}


string::~string(){
  delete p;
  //setCapacity(0);
  std::cout<<"Destructor called"<<std::endl;
}

const char string::get_char(int i) const {
  return p[i];
}

size_t string::capacity() const {
	return _cap;
}

void string::setCapacity(const size_t cap) {
	if (cap < this->size()){ // capacity less than size of the string

/*		return;
  }
	this->_cap = cap; // set capacity
  char* s= new char[this->size()];
  memcpy(s,p,this->size());
	delete(p);
  p=new char[cap];
	for (int i = 0; i < this->size(); ++i){
	   this->p[i] = s[i];
  }
	this->p[this->size()] = '\0';
*/
    std::cout<<"Capacity lower than the size of the string, current size : "<< this->size()<<std::endl;
		return;
  }
  if (cap>this->max_size()){
    std::cout<<"Capacity bigger than the maxsize : "<< this->max_size()<< std::endl;
    return;
  }
	this->_cap = cap+1; // set capacity
  int size = this->size();
  char* s= new char[size];
  memcpy(s,p,size);
  //std::cout<<s<<std::endl;
	delete(p);
  p=new char[cap+1];
	for (int i = 0; i < size; i++){
	   this->p[i] = s[i];
     //std::cout<<p[i]<<std::endl;
  }
	this->p[size] = '\0';
	delete(s);
}

void string::_increasecap(const size_t n) {
  if ((this->_cap + n) > this->max_size()){
    std::cout<<"Not possible to increase, maxsize : "<< this->max_size()<< ", current capacity : "<<this->_cap<<std::endl;
    return;
  }

	/*if (this->_cap > n && p){
    return;
  }
	size_t cap = _cap;
	while (cap <= n){
		cap += _increase;
    std::cout<<cap<<std::endl;
	_increase ++;
}*/
	setCapacity(this->_cap+n);
}
