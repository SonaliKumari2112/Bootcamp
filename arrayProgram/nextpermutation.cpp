#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int idx=-1;
    cout<<"enter the no of element";
    int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}

for(int i= v.size()-2;i>=0;i--){
    if(v[i]<v[i+1]){
         idx=i;
         break;
    }
}
if(idx==-1){
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
{
    cout<<v[i];
}return 0;
}
for(int i=v.size()-1;i>idx;i--){
if(v[i]>v[idx]){
    swap(v[i],v[idx]);
    break;
}
}
reverse(v.begin()+idx+1,v.end());
for(int i=0;i<v.size();i++)
{
    cout<<v[i];
}
    return 0;
}