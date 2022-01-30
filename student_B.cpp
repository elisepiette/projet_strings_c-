/*
method to write for student B:

length()
max_size(): returns the maximum number of characters
resize(size_t, char): changes the number of characters stored
operator=(const string&):  assigns values to the string
operator+(const string&, char):  concatenates a string and a char

*/

#include<iostream>
#include "string.h"
#include <stdio.h>
#include <cstring>

string& string::resize(int size, char c){
  if (size<this->size()){
    /* the current value is shortened to its first n character,
      removing the characters beyond the nth*/
    this->p[size]='\0';
  }else{
    /*the current content is extended by inserting at the end as many characters as needed to reach a size of n.
    the new elements are initialized as copies of c,
    otherwise, they are value-initialized characters (null characters).*/

    char* s= new char[size];
    memcpy(s,p,this->size());
    delete (p);
    p=new char[size];
    int i=0;
    while(s[i]!='\0' && i<100){
      p[i]=s[i];
      i++;
    }
    while (i<size){
      this->p[i]=c;
      i++;
    }
    this->p[i]='\0';
    delete[] s; //ajout
  }

  return *this;
}

int string::length() const{
  int i =0;
  while (p[i]!='\0'){
    i+=1;
  }
  return i;
}

int string::max_size(){
  return _maxsize;
}


string& string::operator= (const string& str){
  delete (p);
  p=new char[str.size()];
  int i=0;
  for(i=0;i<str.size();i++){
    this->p[i]=str.p[i];

  }
  this->p[i]='\0';
  setCapacity(str.size());
  return *this;
}

string operator+(const string& str, char c){
  char* a=new char[str.size()+1];
  int i=0;
  while (i<str.size()){
    a[i]=str.get_char(i);
    i++;
  }
  a[i]=c;
  a[i+1]='\0'; //ajout
  string b(a);
  delete[] a;
  std::cout<<"operateur de studentB"<<std::endl;
  return b;
}
