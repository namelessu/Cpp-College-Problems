//Array Initialization and Value Assignment
#include <iostream>
using namespace std;
int main(void){
    double alpha[30],index;
    for(int i=0;i<15;i++){
        index=2*i;
        alpha[i]=index;
        
    }
    for(int i=15;i<=30;i++){
        index=3*i;
        alpha[i]=index;
    }
    for(int i=0;i<5;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    for(int i=5;i<10;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    for(int i=10;i<15;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    for(int i=15;i<20;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    for(int i=20;i<25;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    for(int i=25;i<30;i++){
        cout<<alpha[i]<<" "<<endl;
    }
    return 0;
}