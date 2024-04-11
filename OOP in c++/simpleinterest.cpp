#include<iostream>
using namespace std;
int main(){
    int r,t,p,s;
    cout<<"Enter the rate = ";
    cin>>r;
    cout<<"Enter the time = ";
    cin>>t;
    cout<<"Enter the principal = ";
    cin>>p;
    s = (p*r*t)/100;
    cout<<"The simple interest = "<<s;
    return 0;
}