#include <iostream>
using namespace std;
//*******************factorial**********************
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int small = factorial(n - 1);
//     return n * small;
// }

//****************** fibonnaci **********************
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     if (n == 1)
//     {
//         return 1;
//     }

//     return fib(n - 1) + fib(n - 2);
// }

//******************array is sorted 
//  bool sorted( int arr[], int n){
//     if(n==0 || n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){return false;}
//     bool small= sorted(arr+1,n-1);
//     if(small){
//         return true;
//     }
//     else{
//         return false;
//     }
//  }

bool sorted(int arr[],int n){
  for(int i=0; i<n;i++){
        if(arr[i]>arr[i+1]){
            return false ;
        }
        else {
            return true;
        }
     }
}

int main()
{

    int n;
     int arr[]={2,1,3,4,5};
  cout<<sorted(arr,5);
     
    //  cout<<sorted(arr,5)<<endl;
    // cout << fib(6) << endl;

    // int n;
    // cin >> n;
    // int output = factorial(n);
    // cout << output << endl;
}
