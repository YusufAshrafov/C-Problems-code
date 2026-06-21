// Misol 154
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;      int d=0;   char b;
    getline(cin,s);
   for(int i=0; i<s.length(); i++){ 
   b=s.at(i);
   switch(b){
 case '1': d+=1; break;
   case '2': d+=2; break;
     case '3': d+=3; break;
       case '4': d+=4; break;
         case '5': d+=5; break;
           case '6': d+=6; break;
             case '7': d+=7; break;
               case '8': d+=8; break;
                 case '9': d+=9; break; } }
   cout<<d;
        return 0;
}
