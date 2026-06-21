// Misol 207
#include<iostream>
using namespace std;
long long int ekubk(long long int a,long long int b, long long int &d);
int main()
{
long long  int a,b,f,d,g;  
	cin>>a>>b;    f=a;   g=b;
	ekubk(a,b,d);
	cout<<f*g/d;
	return 0;
}
long long int ekubk( long long int a, long long int b,long long int &d)
{
   while(a!=b){
       if(a>b){
           a=a-b;
       }
       else if(b>a){
           b=b-a; 
       } 
       else if(a==b){
           return a;
       }
   }
       d=a;
       return 0;
}
