#include <bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>>& arr, int n)
{
 for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    int i=0;
    while(i<n){
        int l=0;
        int r=n-1;
        while(l<r){
            int temp=arr[i][l];
                arr[i][l]=arr[i][r];
                arr[i][r]=temp;
                l++;
                r--;
        }
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    } 
    int k;
    cout<<"enter the times you want to rotate";
    cin>>k;
    k=k%4;
    while(k>0){
        rotate90(arr,n);
        k--;
    }
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}