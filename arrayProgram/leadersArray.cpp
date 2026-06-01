#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of element";
    cin>>n;
    int arr[n];
    cout<<"enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[n-1];
    int leader[n];
    leader[0]=max;
    int index =0;
  for(int i=n-2;i>=0;i--){
    if(arr[i]>max){
        max=arr[i];
        index++;
        leader[index]=max;
    }
    
  }
  cout<<"leader elements are";
     for(int i=index;i>=0;i--){
        cout<<leader[i]<<" ";
    }
    return 0;
}