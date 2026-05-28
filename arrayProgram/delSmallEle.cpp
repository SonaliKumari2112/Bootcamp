#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    int small=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
          index=i;  
        }
     }
     for(int k=index;k<n-1;k++){
        arr[k]=arr[k+1];
     }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}