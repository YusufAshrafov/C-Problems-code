// mIsol 162
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str,n;
  getline(cin,n);
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
      if(str.at(i)!='$'){cout<<str.at(i); } }
  return 0;
}
