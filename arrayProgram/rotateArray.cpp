#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int k;
cin>>k;
 k=k%n;
reverse(a,a+k);
reverse(a+k,a+n);
reverse(a,a+n);
 for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}