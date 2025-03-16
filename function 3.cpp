/*x^y*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double power(double x,int y){
    double c;
    c=pow(x,y);
    return c;
}
int main(void){
    int N,L;
    cout<<"enter the value of N,L"<<endl;
    cin>>N>>L;
    cout<<"N to the power L "<<power(N,L);
    return 0;
}