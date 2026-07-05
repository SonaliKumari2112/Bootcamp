#include<iostream>
#include<stack>

using namespace std;
int main(){
    string s;
    getline(cin,s);
stack<char>st;
for(char ch:s){
    if(ch=='['||ch=='{'||ch=='('){
        st.push(ch);
    }else{
        if(st.empty()){
            cout<<"not valid";
        }
        char top= st.top();
        st.pop();
        if((ch==')'&&top!='(')||(ch=='}'&&top!='{')||(ch==']'&&top!='[')){
            cout<<"not valid";
            return 0;
        }
    }
}
if(st.empty()){
    cout<<"valid";
}
    return 0;
}