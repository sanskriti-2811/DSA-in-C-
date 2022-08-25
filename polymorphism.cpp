#include <iostream>
using namespace std;
class A{

     public:
     void sayhello(){
        cout<<"hello Sanskriti"<<endl;
     }
      void sayhello(string name ){
        cout<<"hello Sanskriti"<<name<<endl;
     }
       int sayhello(string name, int n ){
        cout<<"hello Sanskriti"<<name<<endl;
     }
};

////////Function overloading
int main(){
  A obj;
  obj.sayhello("anskriti");
}