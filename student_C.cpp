#include <iostream>
#include "string.h"

/*
string string::operator=(const char* c){
  int s = c->sizeof();
  std::cout<<"s: "<<s<<std::endl;
  p = new char[s];
  for (int i=0; i!=s; ++i){
    p[i]=c[i];
  }
//  p[s]='\0';

  return p;
  }
*/


//https://en.cppreference.com/w/cpp/string/basic_string/operator%2B
string operator+(const string& a, const string& b){
  int size_a=a.size();
  int size_b=b.size();
  char* p = new char[size_a+size_b];
  for (int i=0; i!=size_a; ++i){
    p[i]=a.c_str()[i];
  //  std::cout <<"p"<< i <<": "<<p[i]<<std::endl;

  }
  for (int j=size_a; j!=size_a+size_b; ++j){
    p[j]=b.c_str()[j-size_a];
  //  std::cout <<"p"<< j <<": "<<p[j]<<std::endl;
  }
  p[size_a+size_b]='\0';
  string result(p);
  std::cout<<"operateur de studentC"<<std::endl;
  return result;
}
