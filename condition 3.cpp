//a program that mimics a calculator
#include <iostream>
#include <cmath>
using namespace std;
int main(void){
float x,y;
char op;
cout<<"enter the value of x and y"<<endl;
cin>>x>>y;
cout<<"enter the operator that should be performed "<<endl;
cin>>op;
if(op=='+'){
    cout<<"x+y"<<'\t'<<x+y<<endl;
}
else if(op=='-'){
    cout<<"x-y"<<'\t'<<x-y<<endl;
}
else if(op=='*'){
    cout<<"x*y"<<'\t'<<x*y<<endl;
}
else if(op=='/'){
    if(y==0){
        cout<<"the answer is undefined"<<endl;
    }
    else{
        cout<<"x/y"<<'\t'<<x/y<<endl;
    }
}
}