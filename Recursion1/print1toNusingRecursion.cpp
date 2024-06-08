#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int m;
    cout<<"Enter the value of m:";
    cin>>m;
    print(m);
}