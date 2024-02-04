#include<iostream>
using namespace std;
class complex{
   int x;
   int y;
   public:
complex(int a, int b){
      x=a;
      y=b;
}
complex(){};
friend ostream operator << (ostream &p, complex &q);
void display(){
    cout<<x<<endl;
    cout<<y;
}
};
ostream operator << (ostream &p, complex &q){
   p=q.x+q.y;
   return pmn;
   
   
}

int main(){
   complex m(2,4);
   complex n(3,5);
   cout<<m;

}