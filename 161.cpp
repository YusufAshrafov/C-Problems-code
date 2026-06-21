// MIsol 161
#include <iostream>
#include <string>
using namespace std;
int main(){
  string str,n; int s=0,m=0,o=0,a=0,l=0;
  getline(cin,n);
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
        if(str.at(i)=='A'){  a++;  }
         if(str.at(i)=='S'){  s++;  }
         if(str.at(i)=='L'){  l++;  }
         if(str.at(i)=='O'){  o++;  }
         if(str.at(i)=='M'){  m++;  } }
            if(s>=2&&m>=1&&o>=1&&a>=2&&l>=1){
                cout<<"YES"; }
            else {cout<<"NO"; }
  return 0;
}
