// a program that calculate interest based on certain equations 
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double averageDaily_Balance,netBalance,d1,d2,payment;
    cout<<"enter the netBalance"<<endl;
    cin>>netBalance;
    cout<<"enter the number of days before the billing cycle"<<endl;
    cin>>d1;
    cout<<"enter the number of days after the billing cycle"<<endl;
    cin>>d2;
    cout<<"enter the fucking payment"<<endl;
    cin>>payment;
    averageDaily_Balance=(((netBalance*d1)-(payment*d2))/d1);
    cout<<"the averageDaily Balance"<<endl<<abs(averageDaily_Balance);
    return 0;
}