#include<iostream>
using namespace std;
class student{
    int roll;
    int age;
    public:
    student(int r, int a): roll(r),age(a){};
    student(){};
    student sum(student x){
        student temp;
        temp.roll=roll+x.roll;
        temp.age=age+x.age;
        return temp;
    }
    
    
    };
    class complex{
        int m,n;
        public:
        complex(student x){
            m=x.roll;
        }
    }