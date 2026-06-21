// //#algo0095. Sikl35
#include<iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b,x,y,c,d;
    cin>>x>>y>>c>>d;
     double s=0;
    for(double i=1; i<=x; i++){
        s=s+(pow(i,4)+i*i+3)/(sqrt(i+exp(i)));
    }
    cout.precision(2);
    cout<<fixed<<s<<" ";
    double p=0;
    for(double k=1; k<=y; k++){
    p=p+(k+1)/(k*k*k+5*k);}
    cout.precision(2);
    cout<<fixed<<p<<" ";
    double sp=0;
    for(double  m=1; m<=c; m++)
    {
        double v=1;
        for(double n=1; n<=d; n++){
            v*=sqrt((fabs(pow(m,n)-pow(n,m)))/(pow(m,n)+pow(n,m)));}
        sp=sp+v;
    }
        cout.precision(2);
        cout<<fixed<<sp<<" ";
return 0;
    }
