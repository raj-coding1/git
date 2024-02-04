#include<iostream>>
using namespace std;
class student{
    int marks;
    public:
    student(int m){
        marks=m;
    }
    student(){};
    int highestScore(student a, student b){
        if(marks<a.marks){
            if(a.marks<b.marks){
             return b.marks;
            }
        }
        else if(marks>a.marks){
            if(marks>b.marks){
                return marks;
            }
        }
    }
};
int main(){
    student ra(85);
    student a(87);
    student b(78);
    int x;
    cout<<ra.highestScore(a,b);

}