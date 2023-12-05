//bubble sort
//move the largest number to the end
//by swapping adjacent numbers
//5 4 3 2 1
//4 5 3 2 1
//4 3 5 2 1
//4 3 2 5 1
//4 3 2 1 5 and so on
#include<iostream>
using namespace std;
int bubble_sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
  int main(){
    int arr[]={5,3,4,0};
    int n=4;
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
  }
  


