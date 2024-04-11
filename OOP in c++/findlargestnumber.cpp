#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"Enter the value of c = ";
    cin>>c;
    if(a>b&a>c){
        cout<<a<<" is the largest number";
    }
        else if(b>a&b>c){
              cout<<b<<" is the largest number";
        }
        else{
             cout<<c<<" is the largest number";
        }
        return 0;

    
}