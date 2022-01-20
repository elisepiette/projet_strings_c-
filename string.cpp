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
  std::cout<<i<<std::endl;
  int size=i;
  memcpy(p,str, size);
  this->p[size]='\0';
  /*while(str[i]!='\0' && i<100){
    _str[i]=str[i];
    i++;
  }
  this->_str[i]='\0';
  this->_len=i;*/
}

const char* string::get_str() const {
  return p;
}

/*int string::get_len() const {
  return _len;
}*/

/*
  string::string(const string& str){
    int i;
    for (i=0; i<(str->_len); i++){
      this->_str[i]=str->_str[i];
    }
    this->_len=str->_len;
  }

  */
