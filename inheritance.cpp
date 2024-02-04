#include<iostream>>
using namespace std;
class student{
    protected:
   int roll_num;
   int age;
   public:
student(int r, int a){
    roll_num=r;
    age=a;
    cout<<"i run second";
}
student(){};
void display(){
    cout<<roll_num<<endl;
    cout<<age;
}
};
class marks{
    protected:
    float sub1;
    float sub2;
    public:
    marks(float s1, float s2){
        sub1=s1;
        sub2=s2;
        cout<<"i run first";
    }
    marks(){};
    void display(){
        cout<<sub1<<endl;
        cout<<sub2<<endl;
    }

};
class total : public marks, public student
{
    float i;
    
    public:
    total(float x, float m, float n, int e, int f): student(e,f),marks(m,n)
    {
        i=x;
        //  j=y;
    }
   float full(){
    return sub1+sub2;
   }

};
int main(){
      total result(4.5,6.7,87.0,67,56); 
     cout<< result.full();                                                       
}