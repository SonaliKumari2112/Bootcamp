#include<iostream>
using namespace std;
int main()
{ int r,c;
    cout<<"enter the no of row and column";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"matrix element are  ";
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j];
        }
    }
    int sum=0;
    
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==0||j==0||i==r-1||j==c-1){
            sum=sum+arr[i][j];
        }
    }
   }
   
    cout<<endl<<"Sum of Boundary Element"<<sum;
    return 0;
}