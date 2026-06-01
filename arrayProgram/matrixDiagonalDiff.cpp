#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter the no of row and column";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    int sum=0;
   int i=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i][i];
        sum=sum+arr[i][n-i-1];
    }
    if(i%n!=0){
        sum=sum-arr[n/2][n/2];
    }
cout<<"sum of diagonal"<<sum;
    return 0;
}