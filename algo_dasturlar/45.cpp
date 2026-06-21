// //#algo0045 tarmoqlanuvchi 15
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,b,c;
  cin>>a>>b>>c;
  if(a!=0 && (b*b)-(4*a*c)>=0){
    printf("%.2f ",((-b)+(sqrt((b*b)-(4*a*c))))/(2.0*a));
      printf("%.2f ",((-b)-(sqrt((b*b)-(4*a*c))))/(2.0*a));
  }else
    if(a!=0 && (b*b)-(4*a*c)<0){
    cout<<"NO";
    }
    return 0;
  }
