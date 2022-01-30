#include<iostream>
#include <cstring>
#include "string.h"

string::string(){

  //p=new char[_cap];
  p=new char[1];
  p[0]='\0';
  setCapacity(1);
  //std::cout<<"Je suis un string nul"<<std::endl;
}

string::string(const string& s){
  //int i = s._cap;
  int i = s.size();
  p = new char[i];
  //ps=s.c_str();
  //int i=0;
  //std::cout<<"Je suis un string construit par copy"<<std::endl;
  /*while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
  }*/
  //int cap=i;
  //memcpy(p,s.c_str(), cap);
  int size=i;
  memcpy(p,s.c_str(), size);
  setCapacity(size);
}


string::string(const char* str){
  //setCapacity(10);
  //p = new char[_cap];
  int j =0;
  while (str[j]!='\0'){
    j+=1;
  }

  p = new char[j];
  int i=0;
  while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
    //_increasecap(this->size());
  }
  int size=i;
  //memcpy(p,str, size);
  this->p[size]='\0';
  //std::cout<<j<<std::endl;
  setCapacity(j);
  //std::cout<<"Je suis un string construit à partir d'un pointeur"<<std::endl;
}


string::~string(){
  delete p;
  //setCapacity(0);
  //_increase=0;
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
