#include<iostream>
using namespace std;
// class b;

class b{
    int p;
    int q;
    public:
    b(int c, int d){
        p=c;
        q=d;
    }
   int get_a(){
    return p;
   }
   int get_b(){
    return q;
   }
};
class a{
    int x;
    int y;
    public:
    a(b &m){
        x=m.get_a();
        y=m.get_b();
    }
    a(){};
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main(){
    b B(5,6);
    a A;
    A=B;
    A.display();
}