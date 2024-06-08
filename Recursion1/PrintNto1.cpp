#include<iostream>
using namespace std;
    void print1ToN(int n){
        while(n>0){
            cout<<n<<endl;
            n--;

        }
    }
int main(){
  int m;
  cout<<"Enter a m:";
  cin>>m;
  print1ToN(m);
}