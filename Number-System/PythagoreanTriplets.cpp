#include<iostream>
using namespace std;
int main(){
    int n=20;
    int a=1;
    int b=2;
    int c=b+1;

    while(c<=n){
        if(a*a+b*b==c*c){
            cout<<"a"<<" "<<"b"<<" "<<"c";
        }
        a++;
        b++;
        c++;
    }


}