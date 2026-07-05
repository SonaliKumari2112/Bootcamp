#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isOperand(char ch) {
    return ((ch >= 'A' && ch <= 'Z') || 
            (ch >= 'a' && ch <= 'z') || 
            (ch >= '0' && ch <= '9'));
}

string postfixToInfix(string s) { 
    stack<string> st; 

    for (int i = 0; i < s.length(); i++) {
        
        if (isOperand(s[i])) {
            string op(1, s[i]); 
            st.push(op);
        }
        
        else {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop(); 
            
           
            string combined = "(" + t2 + s[i] + t1 + ")";
            st.push(combined);
        }
    }

   
    return st.top();
}

int main() {
    string s ; 
    getline(cin,s);
    cout<< postfixToInfix(s) << endl; 
    
    return 0;
}