#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    bool print=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            print =true;
            break;
        }
    }
    if(print){
        continue;
    }
    int count=0;
    for(int k=0;k<n;k++){
        if(arr[i]==arr[k]){
            count++;
        }
    }
    cout<<arr[i]<<"->"<<count<<endl;
}
    return 0;
}