#include<iostream>
#include <cstring>
#include "string.h"

string::string(){
  p=nullptr;
}
string::string(const char* str){
  p = new char[10];
  int i=0;
  while (str[i]!='\0'){
    i+=1;
  }
  int size=i;
  memcpy(p,str, size);
  this->p[size]='\0';
}

const char* string::get_str() const {
  return p;
}

const char string::get_char(int i) const {
  return p[i];
}
