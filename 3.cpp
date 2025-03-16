//a c++ program that calculate total amount after adding tax
#include <iostream>
using namespace std;
int main(void){
    const float tax_rate=0.09;
    float tax_amount=0,sales_amount,total_amount=0;
    cout<<"enter the sales amount"<<endl;
    cin>>sales_amount;
    tax_amount=tax_rate*sales_amount;
    total_amount=tax_amount+sales_amount;
    cout<<"the sales amount"<<sales_amount<<'\n'<<"tax amount "<<tax_amount<<'\n'<<"total amount "<<total_amount<<endl;
}