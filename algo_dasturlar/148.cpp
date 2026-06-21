// MIsol 148
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str,cc; int s=0;
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
        if(str.at(i)!=' '){
            cc+=str.at(i);  s++;   }
    if( str.at(i)==' ' || i==str.length()-1 ){
                 if(cc.at(0)=='A'){
                            for(int x=0; x<s; x++){
    cout<<cc.at(x); 
   if(x==s-1){cout<<"\n"; }} s=0; cc.clear(); } 
                 else if(cc.at(0)!='A'){ s=0; cc.clear(); }
                 } } 
  return 0;
}
