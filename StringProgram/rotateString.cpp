#include<iostream>
using namespace std;
bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m){
            return false;
        }
        string t=s+s;
        return t.find(goal)!=string::npos;
    }
int main(){
    string s;
    getline(cin,s);
    string goal;
    getline(cin,goal);
    if(rotateString(s,goal)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}