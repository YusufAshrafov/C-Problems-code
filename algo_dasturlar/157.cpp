// Misol 157
#include<string>
#include <iostream>
using namespace std;
int main()
{
  string str, k[500]; 
  int n = 0,x;
  getline(cin, str);
  cin>>x;
  for(int i = 0; i < str.length(); i++){
    if(str[i] != ' ')
    k[n] += str[i];
    else n++;    }
  for(int i=0; i<=n; i++){
      if(i==x-1){ cout<<"TATU "; }
      if(i!=x-1){ cout<<k[i]<<" "; } }
 return 0;
}
