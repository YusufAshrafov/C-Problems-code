// // misol-432
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{   
    int x;  string y,z;
	getline(cin,y);
	y+=' ';
	for(int i=0; i<y.length(); i++){
		if(z=="begin" && y[i]==' '){
			x++;
			z="";
		}
		else if(y[i]!=' '){
			z+=y[i];
		}
	}
	cout<<x;
	return 0;
}
