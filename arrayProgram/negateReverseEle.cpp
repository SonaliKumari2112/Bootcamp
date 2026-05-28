#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the no of row and column";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cin>>arr[i][j];
        }
    } 
    int row=0;
while(row<r){
    for(int j=0;j<c;j++){
        if(row%2==0){
            arr[row][j]=-arr[row][j];
        }
    }
    row++;
}
 int col=0;
 while(col<c){
        int top=0;
        int bottom=r-1;
        while(top<bottom){
            int temp=arr[top][col];
            arr[top][col]=arr[bottom][col];
            arr[bottom][col]=temp;
            top++;
            bottom--;
        }
        col++;
    }
for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        cout<<arr[i][j];
        }
        cout<<endl;
    } 
return 0;
}