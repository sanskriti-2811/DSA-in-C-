#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int temp;
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void adjust(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            int temp =arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
           
    }
}
int main()
{

    // declaration

    int n = 6;
    int arr[] = {1, 2, 13, 4, 6,45};
   

    //  reverse(arr, n);
     adjust(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

    // cout<<"every thing is fine"<<endl;

    // <<<<<<<<<<<<< Maximum and minimum of an array >>>>>>>>>>>>>>>>>>>>>>>>>
    int max =0;
    int min;
    for(int i=0; i<n ;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        if(arr[i]<=min){
            min=arr[i];
        }
    }
      cout <<max<<" "<<min;
    //<<<<<<<<<<Liner Search >>>>>>>>>>>>>>>
    // int k =6;
    // for(int i=0;i<n;i++)  {
    //     if(k==arr[i]){
    //         cout<<i<<endl;
    //     }
    // }

    // <<<<<<<<<<<<<Reverse an Array >>>>>>>>>>>>>>>>>>>>>

}
