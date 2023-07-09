#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    int i = 1;
    for(; ; ){
        if(i<=n){
            cout<< i <<endl;
        }
        else{
            break;
        }
        i++;
    }
    cout<<endl;
    cout<<endl;

    // for loop with many  operation
    for(int a = 0 , b = 1; a>=0 && b>=1; a--, b--){
        cout<<a <<" "<<b <<endl;
    }

    cout<<endl;
    cout<<endl;
    // for loop for sum of n
    int sum = 0;
    for(i = 1; i<=n;i++){
        sum = sum + i;
    }
    cout<<sum;

}
