// Misol 300
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	if(x%2==0){y=2;}
if(x%3==0){y=3;}
	if(x%2==0&&x%3==0){y=1;}
	else if(x%2!=0&&x%3!=0){y=0;}
	switch(y){
	    case 1 :cout<<"double";break;
	    case 2 :cout<<y;break;
	    case 3 :cout<<y;break;
	    case 0 :cout<<"none";break;
}
return 0;
}
