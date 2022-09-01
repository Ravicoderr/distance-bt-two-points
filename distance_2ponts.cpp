#include<iostream>
#include<math.h>
using namespace std;
class point
{
    int x,y;
    public:
    friend void distance(point,point);
    point(int a, int b){  //parametrized constructor
        x=a;
        y=b;
    }
    void display(void){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }


};
void distance(point p1, point p2){
    int m = (p2.x-p1.x);
    int n = (p2.y-p1.y);
    int diff = sqrt(pow(m,2)+pow(n,2));
    cout<< "The difference is : "<<diff<<endl;
}
int main(){
    point n1(1,1);    //giving values to parameterized constructor
    n1.display();

    point n2(1,1);
    n2.display();

    distance(n1,n2);
    return 0;


}
