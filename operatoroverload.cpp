#include <iostream>
using namespace std;

class B {
    public :
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 =this->a;
        // int value2=obj.a;
        // cout<< value2-value1;
        cout<<"Hello sansi"<<endl;
    }

    void operator() (){
        cout<<"mei bracket hu"<<this->a<<endl;
    }



};


//<<<<<<<<<<<<<<<<<<<<Run time polymorphism>>>>>>>>>>>>>>>>>>>>>>>>>>

class Animal{

    public:
    void speek(){
        cout<<"speaking"<<endl;
    }

};
class Dog :public Animal{
    public:
//   void speek(){
//     cout<<"Barcking"<<endl;
//   }
};
int main(){

    Dog obj;
    obj.speek();
//    B obj1,obj2;
//    obj1.a=4;
//    obj2.a=7;
//    obj1+obj2;

//    obj1();
}