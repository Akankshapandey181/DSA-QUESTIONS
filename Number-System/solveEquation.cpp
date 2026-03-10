#include<iostream>
using namespace std;
int solveEquation(int a,int b){
    return (a*a*a) + (3*a*a*b) + (3*a*b*b) + (b*b*b);
}
int main(){
    int a,b,c;
    cout<<"Enter values of a,b and c:";
    cin>>a>>b>>c;
    int result=solveEquation(a,b);
    cout<<"Result= "<<result;
    return result;
}