#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        bool isvalid =false;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }else{
            if(st.empty()){
                isvalid=false;
            }
            int top= st.top();
            st.pop();
            if((ch==')'&&top!='(')||(ch=='}'&&top!='{')||(ch==']'&&top!='[')){
                isvalid= false;
            }
            if(!st.empty()){
                isvalid=false;
            }else{
                isvalid=true;
            }
        }}
        if(isvalid){
            cout<<s<<"balanced";

        }else{
            cout<<s<<"not balanced";
        }
    }
    return 0;
}