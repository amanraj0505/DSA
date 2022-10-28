#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 1;
    int count1 = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;++i){
        count = 1;
        for(int j = n-i+1;j>=1;--j){
            cout<<count++;
        }
        for(int k = 1;k<=count1*2;++k){
            cout<<'*';
        }
        for(int l = n-i+1;l>=1;--l){
            cout<<l;
        }
        count1++;
        cout<<endl;
    }
}