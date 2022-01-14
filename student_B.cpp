/*
method to write for student B:

length()
max_size(): returns the maximum number of characters
resize(size_t, char): changes the number of characters stored
operator=(const string&):  assigns values to the string
operator+(const string&, char):  concatenates two strings or a string and a char

*/
#include<iostream>
#include "string.h"

int string::length() const {
  return _len;
}


string string::resize(size_t size, char ch){
  int i =0;
  for (i=0; i<size; i++){
    _str[_len+i]=ch;
  }
  return _str;
}


/*
int string::max_size(){

}


string::operator=(const string&){

}

string::operator+(const string&, char){

}
*/
