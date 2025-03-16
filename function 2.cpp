/*a c++ program that prints the cube of a number using a defined function for cube*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double cube(int x){
    float c=pow(x,3);
    return c;
}
int main(void){
    int N,sum=0;
    for(int i=1;i<=10;i++){
        N=i;
        cout<<cube(N);
        sum=sum+cube(N);
        if(i<10){
            cout<<"+";
            continue;
        }
    }
    return 0; 
}