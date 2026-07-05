#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int priority(char ch){
    if(ch=='^') return 3;
     if(ch=='*'||ch =='/') return 2;
      if(ch=='+'||ch=='-') return 1;
      return -1;
}
string infixPrefix(string s){
    int i=0;stack<char>st;
    string ans="";
    reverse(s.begin(),s.end());

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }
    while(i<s.size()){
        if((s[i]>='A'&&s[i]<='Z')||
            (s[i]>='a'&&s[i]<='z')||
        (s[i]>='0'&&s[i]<='9')){
            ans+=s[i];
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while(!st.empty()&&st.top()!='('){
                ans+=st.top();
                st.pop();

            }
            if(!st.empty()){
                st.pop();
            }

        }
        else{
           if (s[i] == '^') {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            } 
            
            else {
                while (!st.empty() && priority(s[i]) < priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);

        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    string result =infixPrefix(s);
    reverse(result.begin(),result.end());
    cout<<result;
    return 0;
}