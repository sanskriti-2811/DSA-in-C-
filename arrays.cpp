#include <iostream>
using namespace std;
int value(int n){
    if(n==1) return 2;
    return value(n-1)*2;
}

int fab(int n){
    if(n==0 ||n==1) {
        return n;
    }
    return fab(n-1)+fab(n-2);
}

void reverse(int arr[], int s , int e){
    if(s<=e){
        swap(arr[s],arr[e]);
    }
    reverse(arr,s+1,e-1);
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
   int n;
//    cout<< value(10);
// cout<<fab(6);
int arr[5]={1,2,3,4,5};
   reverse(arr,0,4);
   cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr,5 );


}