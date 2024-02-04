#include<iostream>
using namespace std;
class student{
    int age;
   int student::*p=& student::age;
    int roll;
     int student::*q=& student::roll;
    public:
    student(int a, int r){
        age=a;
        roll=r;
    }
    void sum(int a, int)
    student(){};
    void display(){
        cout<<age<<endl;
        cout<<roll<<endl;
    }
    // void student::* ptr()=&student::display;
    friend student sum (int a, student x);
    //  student (student::* ptr)(int a, student x) = &student::sum;

};
student sum (int a, student x){
    student temp;
    //  student (student::* ptr)(int a, student x) = &student::sum;
    int student::*p=& student::age;
    temp.age=x.*p+a;
    temp.roll=x.roll+a;
    return temp;


}
int main(){
    student raj(19,51);
    student (student::* ptr)(int a, student x) = &student::sum;
    student ajeet;
    ajeet=sum(2,raj);
    ajeet.display();
}