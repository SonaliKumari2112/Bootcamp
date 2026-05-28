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
    int sum =0; 
    int max=0;
    int firstindex=-1;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
              firstindex=i;
        }
        else if(sum==max){
           for(int i=firstindex;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=arr[i+1][j];
            }

        }
        r--;
   }
        }
    
 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}