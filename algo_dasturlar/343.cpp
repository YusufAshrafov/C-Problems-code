// Misol 343
#include <iostream>
#include<cmath>
#include<string>
using namespace std;
int main ()
{
 string str; int z=0;
 getline(cin,str) ;
 for(int i=0; i<str.length(); i++){
     if(str.at(i)>='A'&&str.at(i)<='Z'){
         cout<<str.at(i); z++;}}
         if(z==0){cout<<-1;}
  return 0;
}
