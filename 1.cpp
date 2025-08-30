// a c++ program to calculate the newton force between 2 bodies
#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    float M1,M2,d; //defined a variable for first body mass,second body mass and distance
    cout<<"enter the distance between the 2 bodies in centimeters: ";
    cin>>d;
    cout<<"enter the mass of the first body and second body in gram ";
    cin>>M1>>M2; /*asked user to input the formula parameters*/
    const float K=6.67*pow(10,-8);
    float F=K*((M1*M2)/pow(d,2)); /*the newton force formula*/
    cout<<"the force between the 2 bodies "<<F<<'\t'<<endl;/* output of the force*/
}
