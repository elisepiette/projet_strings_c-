#include <iostream>
#include "string.h"
#include <stdbool.h>


// empty() Returns whether the string is empty (i.e. whether its length is 0).
// true if the string length is 0, false otherwise.
bool string::empty() const{
  int size_= this->length();
  return size_==0;
}

// reserve() If n is greater than the current string capacity, the function causes
// the container to increase its capacity to n characters (or greater).
void string::reserve(size_t n) {
	if (_cap < n) {
		setCapacity(n-1);
	}
}


// operator=(const char*)
string& string::operator=(const char* c){
  delete p;
  p = new char[100];
  int i=0;
  while (c[i]!='\0'){
    p[i]=c[i];
    i+=1;
  }
  int size = i;
  p[size]='\0';
  this->resize(size, '\0');
  this->setCapacity(size);
  return *this;
  }


//operator+(const string&, const string&)
string operator+(const string& a, const string& b){
  int size_a=a.size();
  int size_b=b.size();
  if (size_a+size_b <100){
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
  result.setCapacity(size_a+size_b);
  delete[] p;
  return result;
 }
 else{
   std::cout<<"Size max atteinte"<<std::endl;
   return a;
 }
}
