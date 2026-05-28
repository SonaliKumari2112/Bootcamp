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
    int thres=n/4;
    int hash[100]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int count=0;
    for(int i=0;i<100;i++){
        if(hash[i]==2){
            count++;
        }
    }
    if(count==0){
        cout<<"No element is found";
    }else{
        cout<<count<<" element";
    }
    return 0;
}