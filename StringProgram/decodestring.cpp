#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<int>countstack;
    stack<string>stringstack;
    string curr="";
    int num =0;
    for(char ch:s){
        if(isdigit(ch)){
            num=num*10+ch-'0';
        }else if(ch=='['){
            countstack.push(num);
            stringstack.push(curr);
            num=0;
            curr="";
        }else if(ch==']'){
            int repeat = countstack.top();
            countstack.pop();
            string temp =stringstack.top();
            stringstack.pop();
            while(repeat--){
                temp+=curr;
            }
            curr= temp;

        }else{
            curr+=ch;
        }
    }
    cout<<curr;
    return 0;
}