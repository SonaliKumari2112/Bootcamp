


#include<iostream>
#include<stack>

using namespace std;
stack<int>st;
int mini=INT32_MAX;
int push(int val){
    if(st.empty()){
        mini=val;
        st.push(val);

    }else{
        if(val>=mini){
            st.push(val);

        }else{
            st.push(2*val-mini);
            mini=val;
        }
    }
    return 0;
}
int pop(){
    if(st.empty()){
        return 0;

    }
    int n=st.top();
    st.pop();
    if(n<mini){
        mini=2*mini-n;    }
        return 0;
}
int top(){
    if(st.empty()){
        return 0;

    }
    int n=st.top();
    if(mini<n){
        return n;
    }
    return mini;
}
int getmin(){
    if (st.empty()) return -1;
    return mini;
}
int main(){
    push(10);
    push(20);
    push(5);
    cout<<"minimum element"<<getmin()<<endl;
    pop();
    cout<<"minimum element"<<getmin()<<endl;
    cout<<"top element"<<top()<<endl;
    return 0;

}