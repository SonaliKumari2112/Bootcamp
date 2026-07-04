#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int idx=-1;
string s;
getline(cin,s);
for(int i= s.size()-2;i>=0;i--){
    if(s[i]<s[i+1]){
         idx=i;
         break;
    }
}
if(idx==-1){
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
{
    cout<<s[i];
}return 0;
}
for(int i=s.size()-1;i>idx;i--){
if(s[i]>s[idx]){
    swap(s[i],s[idx]);
    break;
}
}
reverse(s.begin()+idx+1,s.end());
cout<<s;
    return 0;
}