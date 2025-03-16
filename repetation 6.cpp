#include <iostream>
using namespace std;
int main(void){
    float total_number,number,average=0,sum=0;
        cout<<"enter the total number: ";
        cin>>total_number;
    for(int i=0;i<total_number;i++){
        cout<<"enter the number: ";
        cin>>number;
        sum=sum+number;
        average=sum/total_number;
    }
    cout<<"the total average of the input numbers: "<<average;
}