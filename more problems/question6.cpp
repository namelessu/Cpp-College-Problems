// This program processes two integers input by the user. 
// It performs the following tasks:
// 1. Checks if each number is odd or even.
// 2. Sums all even numbers encountered during the execution.
// 3. For odd numbers, it calculates and displays their squares.
// 4. If the squared value of either number is less than or equal to 10, it prints the squared value.
// The program continues to prompt for new pairs of numbers until the first number is less than or equal to the second number.
#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int firstNum=1,secondNum=0,i=0,even_sum=0,sum1=0,sum2=0;
    while(firstNum>secondNum){
    cout<<"enter the first number and the second number"<<endl;
    cin>>firstNum>>secondNum;
    if(firstNum%2==0){
        even_sum+=firstNum;
    }
    else {
        cout<<"odd number"<<" "<<firstNum<<endl;
        firstNum=pow(firstNum,2);
        cout<<"odd number square"<<" "<<firstNum<<endl;
    }
    if(secondNum%2==0){
        even_sum+=secondNum;
    }
    else {
        cout<<"odd number"<<" "<<secondNum<<endl;
        secondNum=pow(secondNum,2);
        cout<<"odd number square"<<secondNum;
    }
    cout<<"even sum"<<" "<<even_sum<<endl;
    if(firstNum<=10){
    firstNum=pow(firstNum,2);
    cout<<"firstNum square "<<" "<<firstNum<<endl;
    }
    if(secondNum<=10){
    secondNum=pow(secondNum,2);
    cout<<"second number square "<<" "<<secondNum<<endl;;
    }
}
}