#include<bits/stdc++.h>
using namespace std;

string moveHash(string s){
    int count=0;
    string result="";
    for(int c :s){
        if(c=='#')
        count++;
        else
        result+=c;
    }
    string ans=string(count,'#')+result;
    return ans;
       
}
int main(){
    string s="Move#Hash#to#Front";
    cout<<moveHash(s);
}