// //misol-431
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{   
    int x;  string y,z;
	getline(cin,y);
	y+=' ';
	for(int i=0; i<y.length(); i++){
		z+=y[i];
		if(y[i]==' '){
			x+=stoi(z);
			z="";
		}
	}
	cout<<x;
	return 0;
}
