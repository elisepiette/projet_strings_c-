#include<iostream>
#include "string.h"

/* method to write for student_A :
c_str() : Returns a pointer to an array that contains a null-terminated sequence of characters
(i.e., a C-string) representing the current value of the string object.
size() : Returns the length of the string, in terms of bytes.

clear(): Erases the contents of the string, which becomes an empty string (with a length of 0 characters)
operator= : Assigns a new value to the string, replacing its current contents.
operator+ : Returns a newly constructed string object with its value being the concatenation of the characters in str followed by those of a.
*/

const char* string::c_str() const{
  const char* pbis= p;
  return pbis ;
}

//chaque char a une taille de 1 byte
//quelle est la diff entre length et size ?
size_t string::size() const{
  int i =0;
  while (p[i]!='\0'){
    i+=1;
  }
  return i;
}

void string::clear(){
  p[0]='\0';
}

string string::operator= (char c){ //normalement string& au lieu de string
  p = new char[2];
  p[0]=c;
  p[1]='\0';
  //_len=1;
  //const char s=_str;
  return p;
}

/*string operator+ (const string& str, const char* a){
  int i =0;
  while (a[i]!='\0'){
    i+=1;
  }
  string add;
  int size=i+str.size()
  add.p=new char[size];
  for (int j=0;j++;j<str.size()){
    add.p[j]=str[j];
  }
  int k=0;
  for (j;j++;j<(j+i)){
    add.p[j]=a[k]
    k+=1;
  }
  return add;

}*/
