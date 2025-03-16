/*a program that find answer of a math problem*/
#include <iostream>
using namespace std;
int main(){
    float sum1=0,sum2=0,sum3=0,answer=0;
    float i;
    for(i=7;i<=22;i+=3){
        sum1+=i;
    }
    for(i=6;i<=31;i+=5){
        sum2+=i;
    }
    for(i=13;i<=25;i+=2){
        sum3+=i;
    }
    answer=(sum1+sum2)/sum3;
    cout<<"the answer for the problem "<<" "<<answer<<endl;
}