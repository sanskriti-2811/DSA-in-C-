#include <iostream>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
               count++;
              

            }
            else{
                j++;
            }
        }

    }
    return count;
}
int main(){
  int arr[] ={1, 5,7, 1};
  int ans= getPairsCount(arr,4,6);
  cout<<ans;
  
}