#include<iostream>

#include "string.h"
string::string(){
  a = nullptr;
  len = 0;
}

string::string(const string& copie){
  a=nullptr;
  a=copie.a;
  len=copie.len;
}

string operator= (char c){
  *a=c;
}
