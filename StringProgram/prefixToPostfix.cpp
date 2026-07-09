#include<iostream>
#include<stack>
using namespace std;
bool isOP(char ch){
    return ((ch >= 'A' && ch <= 'Z') || 
            (ch >= 'a' && ch <= 'z') || 
            (ch >= '0' && ch <= '9'));
}
string prefixPostfix(string prefix){
    stack<string>st;
    for(int i=prefix.size()-1;i>=0;i--){
        char ch =prefix[i];
        if(isOP(ch)){
            st.push(string(1,ch));
        }else{
            string op1=st.top();
            st.pop();

            string op2=st.top();
            st.pop();
            
            string temp = op1+op2+ch;
            st.push(temp);
        }
        
    }
    return st.top();
}
int main(){
    string s;
    getline(cin,s);
 string t = prefixPostfix(s);
    cout<<t;
    return 0;
}