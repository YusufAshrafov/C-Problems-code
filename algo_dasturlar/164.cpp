// Misol 164
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;  int l,r;
    getline(cin,str);
    cin>>l>>r;
    if(l<r){
        for(int i=l-1; i<r; i++){
            cout<<str.at(i); }
               }
    else if(l>r){
        for(int i=l-1; i>=r-1; i--){
            cout<<str.at(i); }
            }
    if(l==r){
        cout<<str.at(l-1); }
        return 0;
}
