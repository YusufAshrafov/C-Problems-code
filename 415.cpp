// Misol 415
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){
          int x1,x2,y1,y2; double s;
 cin>>x1>>y1>>x2>>y2;
 s=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 cout<<setprecision(2)<<fixed<<s;
 return 0;
}
