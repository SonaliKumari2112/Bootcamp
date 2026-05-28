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
    cout<<"The reverse array : "<<endl;
    
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;    

}
    int row=0;
    while(row<r){
        int left=0;
        int right=c-1;
        while(left<right){
            int temp=arr[row][left];
            arr[row][left]=arr[row][right];
            arr[row][right]=temp;
            left++;
            right--;
        }
        row++;
    }

    cout<<"The reverse array : "<<endl;
     for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
