#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nge(vector<int>&v){
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&st.top()<=v[i]){
            st.pop();
        }
        ans[i]=st.empty()? -1: st.top();
        st.push(v[i]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int >ans=nge(v);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}