#include<iostream>
#include "string.h"

string::string(){
  _str[0]='\0';
  _len=0;
}
string::string(const char *str){
  int i=0;
  while(str[i]!='\0' && i<100){
    _str[i]=str[i];
    i++;
  }
  this->_str[i]='\0';
  this->_len=i;
}

const char* string::get_str() const {
  return _str;
}

int string::get_len() const {
  return _len;
}

/*
  string::string(const string& str){
    int i;
    for (i=0; i<(str->_len); i++){
      this->_str[i]=str->_str[i];
    }
    this->_len=str->_len;
  }

  */
