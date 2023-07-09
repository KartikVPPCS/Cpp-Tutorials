#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    // LOOP FOR SPACE
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
    // LOOP FOR 1ST TRIANGLE
        int j = 1;
        while(j<=i){
            cout<<j;
            j = j + 1;
        }
    // LOOP FOR 1ST TRIANGLE
        int start = i - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
