// Misol179 c++
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int a2,a1,a3,b1,b2,b3,qoldiq1,qoldiq2,qoldiq3,s=0;
	cin >>a1>>a2>>a3;
	cin >>b1>>b2>>b3;
	if(a1!=0 || b1!=0){
		if(a1<b1){
			s+=a1;
			b1-=a1;
			a1=0;
		}else if(b1<a1){
			s+=b1;
			a1-=b1;
			b1=0;
		}else if(a1==b1){
			s+=a1;
			a1=0;
			b1=0;
		}
	}
    if(a2!=0 || b2!=0){
		if(a2<b2){
			s+=a2;
			b2-=a2;
			a2=0;
		}else if(b2<a2){
			s+=b2;
			a2-=b2;
			b2=0;
		}else if(a2==b2){
			s+=a2;
			a2=0;
			b2=0;
		}
	}
    if(a3!=0){
		if(a3>b1){
			s+=b1;
			a3-=b1;
			b1=0;
		}else if(a3<b1){
			s+=a3;
			b1-=a3;
			a3=0;
		}else{
			s+=a3;
			a3=0;
			b1=0;
		}
		if(a3>b2){
			s+=b2;
			a3-=b2;
			b2=0;
		}else if(a3<b2){
			s+=a3;
			b2-=a3;
			a3=0;
		}else{
			s+=a3;
			a3=0;
			b2=0;
		}
	}
	if(b3!=0){
		if(b3>a1){
			s+=a1;
			b3-=a1;
			a1=0;
		}else if(b3<a1){
			s+=b3;
			a1-=b3;
			b3=0;
		}else{
			s+=b3;
			b3=0;
			a1=0;
		}
		if(b3>a2){
			s+=a2;
			b3-=b2;
			a2=0;
		}else if(b3<a2){
			s+=b3;
			a2-=b3;
			b3=0;
		}else{
			s+=b3;
			b3=0;
			a2=0;
		}
	}
	if(a3>b3 && b3!=0){
		s+=b3;
		a3-=b3;
		b3=0;
	}else if(a3<b3 && a3!=0){
		s+=a3;
		b3-=a3;
		a3=0;
	}else if(a3==b3 && a3!=0 && b3!=0 ){
		s+=b3;
		a3=0;
		b3=0;
	}
    cout <<s;
	return 0;
}
