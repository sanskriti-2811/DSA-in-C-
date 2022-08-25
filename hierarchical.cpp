#include <iostream>
using namespace std;
 

 class A{
    public:
    int age ;
    int height;
    int weight;
    public:
    void sleep(){
        cout<<"Sleep"<<endl;
    }
 };

class B:public A{

};
class C:public A{

};
int main(){
   C obj1;
   obj1.sleep();

   B obj2;
   obj2.sleep();



}