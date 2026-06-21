// mIsol 138
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,max,m,v,min;
  cin>>n;
  int a[n][n];
  for(int i=0; i <n; i++){
       for(int j=0; j <n; j++){
        cin>>a[i][j];cout<<" ";} cout<<"\n"; }  
          for(int i=0;  i<n;  i++){
          for(int j=i;  j<n;  j++){
           if(j==0){max=a[j][j];}
           if(a[j][j]>max){max=a[j][j];}}}
for(int i=0;  i<n;  i++){
              if(i==0){min=a[i][n-1];}
           if(a[i][n-i-1]<min){min=a[i][n-1-i];}}
 cout<<max<<" "<<min;
  return 0;
}
