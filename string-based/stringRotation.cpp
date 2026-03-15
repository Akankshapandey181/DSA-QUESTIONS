#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcde";
    string goal="cdeab";

    if(s.length()!=goal.length()){
        cout<<"false";
        return 0;
    }
    string temp=s+s;
    if(temp.find(goal)!=string::npos){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
