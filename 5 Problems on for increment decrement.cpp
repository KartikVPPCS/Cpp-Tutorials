#include <iostream>
using namespace std;

int main(){

    // PROBLEM  1
    int a, b = 1;
    a = 10;
    if(++a){
        cout<<b;
    }
    else{
        cout<<++b;
// OUTPUT
        /*
         1
        */


    }

    cout<<endl;
    cout<<endl;

    // PROBLEM  2
    int A  = 1;
    int B  = 2;
    if(A-- > 0 || ++B > 2){
        cout<<"Stage 1 - Inside_if "<<endl;
    }
    else{
        cout<<"Stage 2 - Inside_else"<<endl;
    }
    cout<< A << " " << B << endl;
//OUTPUT
        /*
       Stage 1 - Inside_if
        0 2
        */


    cout<<endl;
    cout<<endl;

    // PROBLEM 3
    int number = 3;
    cout<<(25 * (++number));
//OUTPUT
        /*
        100
        */


    cout<<endl;
    cout<<endl;

    // PROBLEM 4
    int num1 = 1;
   // num1 1
    int num2 = num1++;
    int num3 = ++num1;

    cout<< num2 ;
    cout<< num3 ;
//OUTPUT
        /*
        1 3
        */


    cout<<endl;
    cout<<endl;
}
