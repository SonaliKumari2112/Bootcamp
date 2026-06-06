#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the no of row and column";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>arr[i][j];
        }
    }
    int max=0;
 
    int index=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];}
            if(sum>max){
                max=sum;
                index=i;
            }
        
    }
        
    
 for(int i=0;i<r;i++){
     if(i==index){continue;}
        for(int j=0;j<c;j++){
           
        cout<<arr[i][j];   
        
    }
        cout<<endl;
    }
    

    return 0;
}