// a c++ program that adds 2 numbers using functions
#include <iostream>
using namespace std;
float add(float x,float y){
    float add=x+y;
    return add;
}
int main(){
    int l,y;
    cout<<"enter the 2 numbers"<<endl;
    cin>>l>>y;
    cout<<"the sum"<<" "<<add(l,y);
    return 0;
}