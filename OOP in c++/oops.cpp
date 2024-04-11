#include<iostream>
using namespace std;
class Circle
 {
private:
double radius;

public:
void compute_area(double r){
    radius = r;
    double area = 3.14*r*r;
    cout<<"Radius is = "<<radius<<endl;
    cout<<"Area is = "<<area;
}
};
int main(){
    Circle  obj;
    int r;
    cout<<"Enter the value of radius = ";
    cin>>r;
    obj.compute_area(r);
    return 0;
}
