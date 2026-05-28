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
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest element of array :"<<max;
    return 0;
}