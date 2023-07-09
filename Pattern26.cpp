#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i  = 1;
        // numbers
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j = j + 1;
        }


        // star
        int l = 1;
        while(l<=(i-1)*2){
            cout<<"*";
            l = l + 1;
        }


        // numbers
        int k = n - i+1;
        while(k>=1){
            cout<<k;
            k = k - 1;
        }
        cout<<endl;
        i = i + 1;

    }
}
