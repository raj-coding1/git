#include<iostream>
using namespace std;
class node{
  int age;
   public:
  int roll;
 
  node(int a, int roll){
    age=a;
    this->roll=roll;
  }
  node(){};
  void display(){
    cout<<"New roll: "<<roll;
    cout<<endl;
    cout<<"New age: "<<age;

  }
 friend node result( node r, node a);
  int node::*q=&node::roll;

};
node result(node r, node a){
    node temp;
    int node::*q=&node::roll;
    temp.roll=r.roll+a.*q;
    temp.age=r.age+a.age;
    return temp;
}
int main(){
    int node::*q=&node::roll;
    node raj(19,51);
    node ajeet(24,4);
    node nitish;
    node *p=&nitish;
    nitish=result(raj,ajeet);
    nitish.display();
    cout<<endl;
    cout<<raj.*q;

    



}