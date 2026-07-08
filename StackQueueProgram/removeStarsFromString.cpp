#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string ans="";
    stack<char >st;
    for(int i=0;i<s.size();i++){
        if(s[i]!='*'){
            st.push(s[i]);
        }else{
            st.pop();
        }
    }
    while(!st.empty()){
     char top=st.top();
     ans=ans+top;
     st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}