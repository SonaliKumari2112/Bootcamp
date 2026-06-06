#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the no of rows and column";
    cin>>r>>c;
    int arr[100][100];
    cout<<"enter the element in the matrix";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int inserttype,insertindex;
    cout<<"enter 0 for inserting row and 1 for inserting column";
    cin>>inserttype;
    cout<<"enter position for inserting row/column";
    cin>>insertindex;
    if(inserttype==0){
        //shift  row downward
        for(int i=r;i>insertindex-1;i--){
            for(int j=0;j<c;j++){
                arr[i][j]=arr[i-1][j];
            }

        }
        int k=0;
        while(k<c){
            cin>>arr[insertindex-1][k];
            k++;
        }r++;
         cout<<"matrix after insertion of row "<<endl;
    }
    else if(inserttype==1){
        //shift column
         for(int i=0;i<r;i++){
            for(int j=c;j>insertindex-1;j--){
                arr[i][j]=arr[i][j-1];
            }

        }
        int k=0;
        while(k<r){
            cin>>arr[k][insertindex-1];
            k++;
        }
        c++;
        cout<<"matrix after insertion of column "<<endl;
    }
    
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<"    "<<arr[i][j];
        }
        cout<<endl;
    } 
     int deletetype,deleteindex;
    cout<<"enter 0 for deleting row and 1 for deleting column";
    cin>>deletetype;
    cout<<"enter position for deleting row/column";
    cin>>deleteindex;
   if(deletetype==0){
    //delete row
for(int i=deleteindex-1;i<r-1;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=arr[i+1][j];
            }

        }
        r--;
   }else if(deletetype==1){
for(int i=0;i<r;i++){
            for(int j=deleteindex-1;j<c-1;j++){
                arr[i][j]=arr[i][j+1];
            }

        }
        c--;
   }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}