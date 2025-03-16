/*just a simple conversion program*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double cm=0,m=0,km=0;
    cout<<"enter the distance or length in centimeters"<<endl;
    cin>>cm;
    km=cm/1000;
    m=cm/100;
    cout<<km<<"km"<<endl;
    cout<<m<<"m"<<endl;
}