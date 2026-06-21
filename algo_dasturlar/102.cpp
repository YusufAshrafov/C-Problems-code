// Misol 102
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x,y;double min,s;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i];  if(i==1){min=a[i];}
       if(min>a[i]){min=a[i];}  } cin>>x>>y;   
     for ( int i=1;i<=n;i++){
     if(i>=x&&i<=y){s=((a[i]/min)+0.000001); 
 cout<<setprecision(1)<<fixed<<s<<" ";}
else{s=a[i];cout<<setprecision(1)<<fixed<<s<<" ";}}
return 0;
}
