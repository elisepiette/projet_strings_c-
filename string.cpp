#include<iostream>
#include <cstring>
#include "string.h"

string::string(){
  p=new char[1];
  p[0]='\0';
  std::cout<<"Je suis un string nul"<<std::endl;
}

string::string(const string& s){
  int i = s.size();
  p = new char[i];
  //ps=s.c_str();
  //int i=0;
  std::cout<<"Je suis un string construit par copy"<<std::endl;
  /*while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
  }*/
  int size=i;
  memcpy(p,s.c_str(), size);

}


string::string(const char* str){
  p = new char[100];
  int i=0;
  while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
  }
  int size=i;
  //memcpy(p,str, size);
  this->p[size]='\0';
  std::cout<<"Je suis un string construit à partir d'un pointeur"<<std::endl;
}


string::~string(){
  delete p;
  std::cout<<"Destructor called"<<std::endl;
}

const char string::get_char(int i) const {
  return p[i];
}
