//a program that adds postive numbers stopping when user enter negative or 0
#include <iostream>
using namespace std;
int main(void){
    int number=1,i,sum=0,maxNum=0;
    while(number>0){
    cout<<"enter the number "<<endl;
    cin>>number;
    if(number>0 && number>=maxNum){
    sum=sum+number;
    maxNum=number;
    cout<<"the total sum "<<sum;
    }
    else{
        break;
    }
    }
cout<<"the total sum "<<sum;
cout<<"the max number "<<maxNum;
}