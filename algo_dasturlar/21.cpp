// //#algo0021. Chiziqli 6
#include <iostream>
 #include <cmath>
 #include <iomanip>
 using namespace std;
 int main()
 {
 float a, b, f;
 cin>>a>>b;
 f=pow(a, 0.2)+pow(b*(a+b)/(2*b+a*b),0.25)*(a*a+b*b+2);
 cout << setprecision(2)<< fixed << f; 
 return 0;
 }
