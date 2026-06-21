// Misol 322
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
     int a,b,c,s;
     cin>>a>>b>>c;
        if(c*c==(a*a+b*b)||b*b==(a*a+c*c)||a*a==(c*c+b*b)){s=1;}
        else if(a==b&&b==c){s=3;}
        else if(a==b||a==c||b==c){s=2;}
        else{s=4; }
switch(s){
            case 1: cout<<s;
            break;
            case 2: cout<<s;
            break;
            case 3: cout<<s;
            break;
            case 4: cout<<s;
            break; }
  return 0;
}
