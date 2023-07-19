#include<iostream>
using namespace std;
int main(){
    cout<<" Enter your numbers n1 and n2 : ";
    double  n1,n2;
    cin>>n1>>n2;
    cout<<" Enter your operations : ";
    char c;
    cin>>c;
    if(c == '+') {
        cout<<" Your result is : "<<n1+n2;
    }
    else if(c == '-'){
        cout<< " Your result is : "<<n1-n2;
    }
    else if (c == '*'){
        cout<<" Your result is : "<<n1*n2;
    }
    else if (c == '/'){
        cout<<" Your result is : "<<n1/n2;
    }
    else{
        cout<<"Invalid operation";
    }

}