// mIsol 155
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str,cc; int s=0;
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
        if(str.at(i)!=' '){
            cc+=str.at(i);   }
    if( str.at(i)==' ' || i==str.length()-1 ){
    if(cc.at(0)>='A'&&cc.at(0)<='Z'){ s++; cc.clear();} 
                 else { cc.clear(); } }}
                cout<<s;
  return 0;
}
