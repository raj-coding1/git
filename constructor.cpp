#include<iostream>
using namespace std;
class complex{
   int x;
   int y;
   public:
   complex(int x, int y){
    this-> x=x;
    this-> y=y;
   }
   complex(complex &X){
    x=X.x;
    y=X.y;
   }
   void operator = (complex &m){
    x=m.x;
    y=m.y;
   }
   ~complex(){
    cout<<"he";
   }
   complex(){};
   friend complex sum(complex a, complex b);
   void display(){
    // cout<<"the sum of two complex number is: "<<x<<"+i"<<y;
    cout<<x<<endl;
    cout<<y;
   }
};
// complex sum(complex a, complex b){
//     complex temp;
//     temp.x=a.x+b.x;
//     temp.y=a.y+b.y;
//     return temp;
// }
int main(){
    {
         complex A(2,4);
    

    A.display();
    }
    A.display();
   
    
    // complex M;
    // M=sum(A,B);
    // M.display();

}