#include<iostream>
#include<string>
using namespace std;


string minWindow(string s, string t){
     char hash[256]={0};
    int m=t.size();
    int n=s.size();
    int l=0;
    int r=0;
    int cnt=0;
    int sid=-1;
    int maxl=INT32_MAX;
    for(int i=0;i<m;i++){
        hash[t[i]]++;
    }
    while(r<s.size()){
        if(hash[s[r]]>0){
            cnt=cnt+1;
        }
            hash[s[r]]--;
        
    
    while(cnt==m){
        if(r-l+1<maxl){
            maxl=r-l+1;
            sid =l;

        }
       
        hash[s[l]]++;
        if(hash[s[l]]>0){
            cnt=cnt-1;
        }
         l++;
    }
    r=r+1;
}
    return sid==-1?" ":s.substr(sid,maxl);
}
int main(){
    string s,t;
    cout<<"enter the string";

    getline(cin,s);

    getline(cin,t);
    
    string  ss=minWindow(s,t);
     
    cout<<"    minimum windows substring  "<<ss;
    return 0;
}