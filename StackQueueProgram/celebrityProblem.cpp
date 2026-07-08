#include<iostream>
#include<vector>
using namespace std;

int celebrity(vector<vector<int>>&mat,int n){
    int top=0;int down=n-1;
    while(top<down){
        if(mat[top][down]){
            top=top+1;
        }else if(mat[down][top]){
            down =down-1;

        }else{
            top++;
            down--;
        }
    }
        if(top>down)
            return -1;
    
    for(int i=0;i<n;i++){
        if((mat[top][i]==0)||(mat[i][top]==1)){

        }else{
            return -1;
        }
    }
    return top;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int c=celebrity(mat,n);
    cout<<"celebrity is"<<c;
    return 0;
}