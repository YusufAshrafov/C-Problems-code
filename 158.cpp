// Misol 158
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str; int s=0,b=0,x=0;
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
        if(str.at(i)!=' '){
           s++;  }
    if( str.at(i)==' ' || i==str.length()-1 ){
    if(s%2==0){ b++; s=0; } 
    else { x++; s=0; } }}
                cout<<x*b;
  return 0;
}
