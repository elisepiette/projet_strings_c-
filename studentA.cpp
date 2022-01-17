#include<iostream>
#include "string.h"

/* method to write for student_A :
c_str() : Returns a pointer to an array that contains a null-terminated sequence of characters
(i.e., a C-string) representing the current value of the string object.
size() : Returns the length of the string, in terms of bytes.

clear(): Erases the contents of the string, which becomes an empty string (with a length of 0 characters)
*/

const char* string::c_str() const{
  const char* p= _str;
  return p ;
}

//chaque char a une taille de 1 byte
size_t string::size() const{
  return 1*_len;
}

void string::clear(){
  _str[0]='\0';
  _len=0;
}

void string::operator= (char c){
  _str[0]=c;
  _str[1]='\0';
  _len=1;
  //const char s=_str;
  //return _str;

}
