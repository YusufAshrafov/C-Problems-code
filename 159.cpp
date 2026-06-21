// Misol 159
#include<string>
#include <iostream>
using namespace std;
int main()
{
  string str, k[500],a; 
  int n = 0,c=0,x=0;
  getline(cin, str);
  for(int i = 0; i < str.length(); i++){
    if(str[i] != ' ')
    k[n] += str[i];
    else n++;    }
  for(int i=0; i<=n; i++){    a.append(k[i]);
     for(int b=0; b<a.length(); b++){ c++; }
     for(int j=0; j<=c-1; j++){
         if(a.at(0)=='a'){ 
         if(j==c-1&& a.at(j)=='b'){ x++; c=0; } } }
         c=0; a.clear(); }
         cout<<x;
 return 0;
}
