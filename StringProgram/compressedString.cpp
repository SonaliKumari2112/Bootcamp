#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string ans="";
    int count=1;
    for(int i=0;i<s.size();i++){
       
        if(i+1<s.size() && s[i]==s[i+1]){
            count++;
        }else{
            ans=ans+s[i];
             ans=ans+to_string(count);
              count=1;

        }
    }
    cout<<ans;
    return 0;
}