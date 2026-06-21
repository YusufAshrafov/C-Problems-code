// // Misol 359 korkadagi 133 17.03.2021col
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int x,n;  string s;
	cin>>n;
	for(int j=1,i=1; i<=n; i++ ,j++ )
	{
		if( j==8 ){ j=1;}
		else{ x=j; }
	}
	switch(x){
		case 1: s="Payshanba";break;
		case 2: s="Juma"; break;
		case 3: s="Shanba"; break;
		case 4: s="Yakshanba"; break;
		case 5: s="Dushanba"; break;
		case 6: s="Seshanba"; break;
		case 7: s="Chorshanba"; break;
	}
	while(1){
	if(1<=n && n<=31){
		cout<<n<<"-Yanvar, "<<s; 
	break;	 }
	if(n<=59 && n>31){
		cout<<n-31<<"-Fevral, "<<s;
	break; }
	if(n>59 && n<=90){
		cout<<n-59<<"-Mart, "<<s;
	break;  }
	if(n<=120 && n>90){
		cout<<n-90<<"-Aprel, "<<s;
	break; }
	if(n<=151 && n>120){
		cout<<n-120<<"-May, "<<s;
	break; }
	if(n<=181 && n>151){
		cout<<n-151<<"-Iyun, "<<s;
	break; }
	if(n<=212 && n>181){
		cout<<n-181<<"-Iyul, "<<s;
	break; }
	if(n<=242 && n>212){
		cout<<n-212<<"-Avgust, "<<s;
	break; }
	if(n<=273 && n>242){
		cout<<n-242<<"-Sentabr, "<<s;
	 break; }
	if(n<=304 && n>273){
		cout<<n-273<<"-Oktabr, "<<s;
	break;  }
	if(n<=334 && n>304){
		cout<<n-304<<"-Noyabr, "<<s;
	break;  }
	if(n<=365 && n>334){
		cout<<n-334<<"-Dekabr, "<<s;
	break; }
	}
	return 0;
}
