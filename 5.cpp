//an annoying c++ program to calculate sales person salary
#include <iostream>
using namespace std;
int main(){
    const float item1=75,item2=125,item3=175;
    double price1T,price2T,price3T,salary,incentitive,total_income,total_sales;
    int n1,n2,n3;
    cout<<"enter the sales person salary"<<endl;
    cin>>salary;
    cout<<"enter the number of unit for item 1,item 2,item 3 respectively"<<endl;
    cin>>n1>>n2>>n3;
    price1T=n1*item1;
    price2T=n2*item2;
    price3T=n3*item3;
    cout<<"units of item 1 sold "<<price1T<<'\n'<<"units of item 2 sold "<<'\n'<<price2T<<"units of item 3 sold "<<'\n'<<price3T<<endl;
    total_sales=price1T+price2T+price3T;
    cout<<"the total sales"<<total_sales;
    cout<<salary;
    incentitive=0.04*salary;
    total_income=incentitive+salary;
    cout<<"total income "<<total_income;
    cout<<"incentive "<<incentitive;
    }