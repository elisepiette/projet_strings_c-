#include<iostream>
#include <cstring>
#include "string.h"

string::string(){
  //setCapacity(1);
  //p=new char[_cap];
  p=new char[1];
  p[0]='\0';
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
}


string::string(const char* str){
  //setCapacity(10);
  //p = new char[_cap];
  p = new char[10];
  int i=0;
  while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
    //_increasecap(this->size());
  }
  int size=i;
  //memcpy(p,str, size);
  this->p[size]='\0';
  //std::cout<<"Je suis un string construit à partir d'un pointeur"<<std::endl;
}


string::~string(){
  delete p;
  setCapacity(0);
  _increase=0;
}

const char string::get_char(int i) const {
  return p[i];
}

size_t string::capacity() const {
	return _cap;
}

void string::setCapacity(const size_t cap) {
	if (this->_cap == cap && this->p) {// capacity set
		return;}
	if (cap < this->size()){ // capacity less than size of the string
		return;}
	this->_cap = cap; // set capacity
  char* s= new char[this->size()];
  memcpy(s,p,this->size());
	delete(p);
  p=new char[cap];
	for (int i = 0; i < this->size(); ++i){
	this->p[i] = s[i];}
	this->p[this->size()] = '\0';
	delete(s);
}

void string::_increasecap(const size_t n) {
	if (this->_cap > n && p){
    return;
  }
	size_t cap = _cap;
	while (cap <= n){
		cap += _increase;
	_increase ++;
  }
	setCapacity(cap);
}

void string::reserve(size_t n) {
	if (_cap == n) {
    return;
  }
	if (_cap < n) {
		setCapacity(n);
		return;
	}
}
