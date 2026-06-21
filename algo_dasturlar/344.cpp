// Misol 344
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string s;           int x,y;
    getline(cin,s);
    cin>>x;
    cin>>y;
    if(x<y){
    for(int i=x-1; i<=y-1; i++){
          cout<<s.at(i); } }
    if(x==y){  cout<<s.at(x-1); }
    if(x>y){ 
    for(int i=x-1; i>=y-1; i--){
          cout<<s.at(i); } }
    return 0;
}
