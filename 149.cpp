// Misol 149
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str,cc,k[500],a[500]; int s=0,n=0,d=0;
  getline(cin,str);
  str+=" ";
 for(int i=0; i<str.length(); i++){
               if(str.at(i)!=' '){  k[n]+=str.at(i); }
  else { n++; } }
 for(int i=0; i<n; i++){     cc=k[i];
 for(int j=0; j<cc.length(); j++){ s++; }
   if(s!=1){  if(cc.at(s-2)=='N' && cc.at(s-1)=='A'){  
                     a[d]=k[i];     d++;    s=0; }
                     else { s=0; } }
  else{ s=0; } }  cout<<d<<"\n";
 for(int i=0; i<d; i++){
                 cout<<a[i]<<" "; }
  return 0;
}
