#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    int c = a+b;
    a = c-a;
    b = c-b;
    cout<<"The value of a after swap = "<<a<<endl;
    cout<<"The value of b after swap = "<<b;
    return 0;
}