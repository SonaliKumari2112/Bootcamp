#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int miss=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        
    miss=miss-a[i];
    }
    

    cout<<"missing number   "<<miss;
    return 0;
}