/*a c++ program that prints the avg,min,max score of the students*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    int array[200],n,max_index,min_index,max_score,min_score,average_score,total_scores=0
    ,counter=0;
    cout<<"enter the n students "<<" ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the score of students "<<endl;
        cin>>array[i];
        total_scores+=array[i];
    }
    average_score=total_scores/n;
    cout<<"the average score of students "<<average_score<<endl;
    min_index=0;
    max_index=0;
    max_score=array[max_index];
    min_score=array[min_index];
    for(int i=0;i<n;i++){
        if(array[i]<min_score){
            min_index=i;
            min_score=array[i];
            continue;
        }
        else {
            max_index=i;
            max_score=array[max_index];
            }
    }
    for(int i=0;i<n;i++){
        if(array[i]>average_score){
            counter++;
        }
    }
    cout<<"maximum score "<<max_score<<" "<<"maximum score student index "<<max_index<<" "<<
    "minimum score "<<min_score<<"minimum score student index "<<min_index<<" "<<"the number of students who got greater than the average "<<counter;
}