// Misol 199
#include<iostream>
using namespace std;
bool f(char& a,char& b,char& c){
	if((a=='a' || a=='u' || a=='i' || a=='o' || a=='e') || (b=='a' || b=='u' || b=='i' || b=='o' || b=='e') || (c=='a' || c=='u' || c=='i' || c=='o' || c=='e')){
		return true;
	}else{
		return false;
	}
}
int main(int argc, char *argv[])
{
    char s[101];  int i=0;  bool p=true;
    cin>>s;
    while(s[i+2]!='\0'){
    	if(f(s[i],s[i+1],s[i+2]) != true){
    	   cout << "NO";
    	   p=false;
    	   break;
    	}
    	i++;
    }
    if(p){
    	cout<<"YES";
    }
	return 0;
}
