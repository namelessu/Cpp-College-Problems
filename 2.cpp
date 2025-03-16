/*a program to calculate total bill divided on 3 families tax and service are added first family
contains a couble of adults and 2 children,second and third contains a couble of adult and one child*/
#include <iostream>
using namespace std;
int main(void){
    /*defined variable for first ,second,third family bills*/
    float first_family=0,second_family=0,third_family=0,total_charge,charge;
    cout<<"enter the bill"<<endl;
    cin>>charge;/*asking user to input the bill*/
    total_charge=charge+(9.5/100)*charge+(0.2/100)*charge; /*calcuating total charge with 9.5 percent tax
    and 0.2 percent service*/
    first_family=first_family+(3.5/10);
    second_family=second_family+(2.75/10);
    third_family=third_family+(2.75/10);
    cout<<"the total bill"<<total_charge;
    cout<<"first family bill "<<first_family<<'\n'<<"second family bill "<<second_family<<'\n'<<"third family "<<third_family<<endl;
}