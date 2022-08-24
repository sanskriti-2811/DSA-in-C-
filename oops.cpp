#include <iostream>
#include <cstring>

using namespace std;
class Hero
{
private:
  int health;

public:
  char level;
  char *name;

   static int time_to_complete;
 //constructor 
  Hero(){
    cout<<"Constructor call"<<endl;

    name =new char[100];
  }

  // parameterised  constructor 
   Hero(int health){
    cout<<"this->"<<this<<endl;
    this->health=health;
   }
   
    Hero(int health,char level){
    this->level=level;
    this->health=health;
   }

   //copy constructor
   Hero(Hero& temp){
 // Deep copy concept
     char *ch = new char[strlen(temp.name)+1];
     strcpy(ch,temp.name);
     this->name =ch;
    cout<<"Call"<<endl;
    this->health=temp.health;
    this->level=temp.level;

   }

   void print(){
    cout<<name<<endl;
    cout<<health<<endl;
    cout<<level<<endl;
   }

  int getHealth(){
    return health;
  }
  void setHealth(int h){
    health=h;
  }
int getLevel(){
    return level;
  }
  void setLevel(char ch){
    level=ch;
  }

  //there is some error while using strcpy
  void setName(char name[]){
    this->name= name;
  }
 
  static int rabndom(){
    cout<<time_to_complete<<endl;
  }
  //Destructor 
  ~Hero(){
    cout<<"Destructor bhai call"<<endl;

  }
};
//static keyword
int Hero :: time_to_complete =5;
int main()
{   
    cout<<Hero::rabndom<<endl;


//  cout<<Hero::time_to_complete<<endl;

//  Hero a;
//   cout<<a.time_to_complete<<endl;




  //  Hero a;
  //  Hero *b =new Hero();
  //  //manuallay 
  //  delete b;

     
 //shallow copy concept
    // Hero one;
    // one.setHealth(70);
    // one.setLevel('c');
    // char name[10]="Sanskriti";
    // one.setName(name);
   // one.print();

  //   Hero two(one);
   // two.print();
    
  //   one.name[0]='G';
    // one.print();

    // two.print();


    //copy assignment operator.
    // one=two;
    //  one.print();

    // two.print();


   





  // Hero suresh(70,'C');
  // suresh.print();

  // Hero rahul(suresh);
  // rahul.print();
















    // cout<<"hi"<<endl;
    //object creation statically 
    // Hero Ramesh(10);
    // cout<<"address of"<<&Ramesh<<endl;
    // cout<<"hello"<<endl;

    //object creation dynamically
    // Hero *h =new Hero(11,'S');
    // h->print();


    // Hero temp(10,'A');
    // temp.print();

  //static allocation
  // Hero a;
  // a.setHealth(70);
  // a.level='A';
  // cout<<"level is"<<a.level<<endl;
  // cout<<"level is"<<a.getHealth()<<endl;
  // //dynamic
  // Hero *h = new Hero;
  // h->setHealth(80);
  // h->level='R';
  // cout<<"level is"<<(*h).level<<endl;
  // cout<<"level is"<<(*h).getHealth()<<endl;

  // //another way 

  // cout<<"level is"<<h->level<<endl;
  // cout<<"level is"<<h->getHealth()<<endl;

  // Hero Ramesh;
  //  Ramesh.level = 'A';
  // Ramesh.setHealth(70);
 
  // cout << Ramesh.getHealth()<< endl;
  // cout << Ramesh.level << endl;
  // cout << sizeof(Ramesh) << endl;
}