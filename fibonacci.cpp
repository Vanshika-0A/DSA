#include<iostream>
using namespace std;
 int main(){
    int a =0;
    int b=1;
    int n=10;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int nextno=a+b;
        cout<<nextno<<" ";
        a=b;
        b=nextno;
    }
 }