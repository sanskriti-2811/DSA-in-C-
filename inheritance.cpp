#include <iostream>
using namespace std;

class Humans{
  
  public:
   int height ;
   int weight;
   int age ;
    
    public :
    int getAge(){
        return this->age ;
    }

    void setWight(int w){
        this->weight =w;

    }

};
//inheritance 
class Male:protected Humans{
  

    public :
    string color;
    public :
    void sleep(){
        cout<<"Man sleeping 1900"<<endl;
    }
    int getheight(){
        return this->height;
    }

};
int main(){



      Male m1;
      cout<<m1.getheight()<<endl;
    //   Male object ;

    //   //inherite kar liye hai Humans ki properties 
    //   cout<< object.age<<endl;
    //   cout<< object.height<<endl;
    //   cout<< object.weight<<endl;
    //   cout<< object.color<<endl;
    //    object.sleep();
    //    object.setWight(84);
    //      cout<< object.weight<<endl;

}