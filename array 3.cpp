/*a program that ask user to input information about 30 students and o/p the highest
score and id of the student*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    int ID[30];
    float score[30];
    char grade[30];
    int max_index,max;
    for(int i=0;i<=3;i++){
        cout<<"enter the student id "<<endl;
        cin>>ID[i];
        cout<<"enter the student score "<<endl;
        cin>>score[i];
        cout<<"enter the student grade "<<endl;
        cin>>grade[i];
    }
    max_index=0;
    max=score[max_index];
    for(int i=0;i<=30;i++){
        if (score[max_index>max]){
            max_index=i;
            max=score[i];
        }
    }
    cout<<"the maximum student score "<<max<<endl;
    cout<<"the id of the student who got highest score"<<ID[max_index];

}