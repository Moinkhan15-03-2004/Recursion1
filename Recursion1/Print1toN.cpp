#include<iostream>
using namespace std;
void print1Ton(int n){
if(n==0) return ;
print1Ton(n-1);
cout<<n<<endl;
}
int main(){
    int m;
    cout<<"Enter the value of m:";
    cin>>m;
    print1Ton(m);
}