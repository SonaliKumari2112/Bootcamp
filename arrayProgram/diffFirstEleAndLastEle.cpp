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
    cout<<"array elements are ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the difference between first and last element "<<arr[n-1]-arr[0];
    return 0;
}