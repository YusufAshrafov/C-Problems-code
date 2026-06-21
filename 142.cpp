// mIsol 142
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n , s,max,min;
  cin>>n;
  int a[n][n];
  for(int i=0; i <n; i++){
       for(int j=0; j <n; j++){
           cin>>a[i][j];}    }   
       /*     for(int i=0; i <n; i++){
       for(int j=0; j <n; j++){
           cout<<a[i][j]<<" ";}  cout<<"\n";  }   */
                    for(int i=0;  i<n;  i++){
       for(int j=i;  j<n;  j++){ 
       if(j==0){max=a[i][j];   min=a[i][j];}
       if(max<a[i][j]){ max=a[i][j];  }
       if(min>a[i][j]){ min=a[i][j];  }
       s=a[i][j];  cout<<s<<" "; }}
       cout<<"\n"<<max<<" "<<min;
  return 0;
}
