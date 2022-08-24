#include <iostream>
#include <stack>
using namespace std;
//*************************STACK IMPLEMENTATION BY ARRAY*****************************
//**************************STACK IMPLEMENTATION BY LINKEDLIST*******************HOMEWORK
// class Stack{

//  public:
//    int *arr;
//    int top;
//    int size;

//    //constructor
//    Stack(int size){
//     this -> size =size;
//     arr =new int[size];
//     top=-1;
//    }

//    void push(int element){
//      if((size-top)>1){
//         top++;
//         arr[top]=element;
//      }
//      else{
//         cout<<"Stack Overflow";
//      }

//    }
   
//    void pop(){
//       if(top>=0){
//         top--;
//       }
//       else{
//         cout<<"Stake Underflow";
//       }
//    }

//    int peek(){
//     if(top>=0){
//         return arr[top];
//     }
//     else{
//         return -1;
//     }

//    }
   
//    bool isEmpty(){
//     if(top== -1){
//         return 1;
//     }
//       else{
//         return 0;
//       }
//    }
   
// };
int main(){

//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(56);
//     st.push(77);
    
//     cout<< st.peek()<<endl;
//      st.pop();
//      cout<< st.peek()<<endl;
//       st.pop();
//      cout<< st.peek()<<endl;
//       st.pop();
//      cout<< st.peek()<<endl;
//       st.pop();
//      cout<< st.peek()<<endl;

//      if(st.isEmpty()){
//         cout<<"Empty";
//      }
//      else{
//         cout<<"Not Empty";
//      }


     //*****************************STACK IMPLEMENTATION BY STL*********************************
    // stack<int> s;
    // s.push(4);
    // s.push(2);
    // s.push(3);
    // s.pop();
    // cout<<s.top()<<endl;
    // if(s.empty()){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"not Empty"<<endl;
    // }
    // cout<<s.size();

     //*********************REVERSE A STRING USING STACK***********************
     string str="sanskriti";
     stack<char>s;
     for(int i=0; i<str.size();i++){
         char ch=str[i];
         s.push(ch);
     }
     string ans="";
     while(!s.empty()){
        char ch =s.top();
        ans.push_back(ch);
        s.pop();
     }
     cout<<ans<<endl;

}