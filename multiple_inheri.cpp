#include <iostream>
using namespace std;
class Animal{
    public :
    int weight;
    int height;
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Humans{
    public:
    string color;
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Hybrid:public Animal,public Humans {

};
int main(){
    Hybrid obj;
    obj.bark();
    obj.speak();
}