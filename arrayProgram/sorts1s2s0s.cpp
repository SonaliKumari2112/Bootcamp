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
    int l=0;
    int mid=0;
    int r=n-1;
    //Dutch National Flag
    while(mid<r){
        if(arr[mid]==0){
            swap(arr[l],arr[mid]);
            l++;
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[r]);
            r--;
        }
        if(arr[mid]==1){
            mid++;
        }
    }
    cout<<"array element ";
     for(int i=0;i<n;i++){
        cout<<arr[i]; 
        
    }
    return 0;
}