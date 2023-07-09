#include <iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"It is a lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z' ){
        cout<<"It is a upper case"<<endl;
    }
    else{
        cout<<"It is a numeric"<<endl;
    }


}

