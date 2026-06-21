// Misol 183 c++
#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char *argv[])
{
	int s=0,i=1,n,p;
while(i<=pow(10,6)){
    cin >>n;
    if(n==0){
        break;
    }
    p=(3+sqrt(9+8*n))/2;
   while(p*(p-3)/2 < n){
     p+=1;
   }
    s+=p;
    i+=1;
   }
cout <<s;
	return 0;
}
