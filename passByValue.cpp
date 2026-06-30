#include<iostream>
using namespace std;
void update(int a){
    a = a/2;
}
int main(){
    int a =10;
    update(a);
    cout<<a<<endl;
}
//pass by value means the function creates the dummy value so it doesnt change the orginal value