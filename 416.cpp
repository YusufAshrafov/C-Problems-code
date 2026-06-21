// Misol 416
#include <iostream>
#include<string>
using namespace std;
int main()
{
  string str; 
  getline(cin, str);
  for(int i = 0; i < str.length(); i++){
   if(str.at(i)== 'a' || str.at(i)=='A'){
       cout<<i+1<<" "; } }
 return 0;
}
