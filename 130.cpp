// mIsol 130
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,m,max,min,c;
    cin>>n>>m;
    int x[n][m];
   for(int i=0;i<=n-1;i++){
           for(int j=0;j<=m-1;j++){
               cin>>x[i][j]; 
       if(i==0){max=x[0][0]; min=x[0][0];}
       if(x[i][j]>max){max=x[i][j];}
       if(x[i][j]<min){min=x[i][j];}}}
       for(int b=0;b<=n-1;b++){ 
                for(int a=0;a<=m-1;a++){
                 c+=x[b][a];}
      cout<<" "<<c;   c=0; }
       cout<<"\n"<<max<<" "<<min;
       return 0;
}
