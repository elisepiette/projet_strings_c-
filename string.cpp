#include<iostream>
#include <cstring>
#include "string.h"

string::string(){
  p=new char[1];
  p[0]='\0';
}
string::string(const char* str){
  p = new char[10];
  int i=0;
  while (str[i]!='\0'){
    p[i]=str[i];
    i+=1;
  }
  int size=i;
  //memcpy(p,str, size);
  this->p[size]='\0';
}

string::~string(){
  delete (p);
}

const char string::get_char(int i) const {
  return p[i];
}
