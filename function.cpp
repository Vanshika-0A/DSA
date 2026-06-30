#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        // odd,(a&1=1) is odd but here we meant that it should return 0 for iseven function check
        return 0;
    }
    else{
        // even
        return 1;
    }
}
int main(){
    int num;
    cout<<"enter no: "<<endl;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}