#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
public:
    double getperimeter(void){
    return (length+width)*2;
    }
    double getarea(void){
    return length*width;
    };
    void setWidth(double w){
        width=w;
    };
    void setLength(double l){
        length=l;
    };
    double getWidth(void){
        return width;
    };
    double getLength(void){
        return length;
    };

private:
    double length;
    double width;
};
int main (){
   Rectangle a;
   a.setLength(10);
   a.setWidth(20);
   cout<<"area of rectangle "<<a.getarea();
   return 0;
}