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
