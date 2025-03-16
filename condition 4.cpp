/*a c++ program that gave me a little headache its about calculating roots for quadratic equation*/
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    double a,b,c,discrimant,root1,root2,realpart,imaginarypart;
    discrimant = (b*b) - (4*a*c);
    cout<<"enter the coffecients a,b,c of the quadratic equation"<<endl;
    cin>>a>>b>>c;
    if(discrimant>0){
        cout<<"2 different real roots"<<endl;
        root1 = (-b+sqrt(discrimant))/(2 * a);
        root2 = (-b-sqrt(discrimant))/(2 * a);
        cout<<"root 1 "<<root1<<'\n'<<"root2 "<<root2;
    }
    else if(discrimant=0){
        cout<<"2 equivalent roots";
        root1 = root2 = -b/(2 * a);
        cout<<"root 1 = root 2"<<"  "<<root1<<endl;
    }
 else  {
        cout<<"imaginery roots"<<endl;
        realpart= -b/(2*a);
        imaginarypart = sqrt(-discrimant)/(2*a);
        cout<<"the real part "<<realpart<<'\n'<<"the imaginery part"<<imaginarypart<<endl;
    }
    }
       