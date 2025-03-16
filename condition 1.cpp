/*a grading program based on score of the students*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    float score;
    cout<<"enter the score of the student "<<endl;
    cin>>score;
    while(score>100 || score <0){
    cout<<"enter the score of the student "<<endl;
    cin>>score;
    }
    if(score >=85){
        cout<<"the grade is excellent "<<endl;
    }
    else if(score>=75 && score<85){
        cout<<"the grade is very good "<<endl;
    }
        else if(score>=65 && score<75){
         cout<<"the grade is good "<<endl;
        }
        else if (score>=50 && score<65){
            cout<<"the grade is pass "<<endl;
        }
        else{
            cout<<"he is a failure and he should go fuck himself"<<endl;
        }
        return 0;
}