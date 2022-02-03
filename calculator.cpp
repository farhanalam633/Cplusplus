#include<iostream>
using namespace std;

int main(){
    float n1;
    cout<<"Enter a number: "<<endl;
    cin>>n1;

    char op;
    cout<<"Enter an operator: "<<endl;
    cin>>op;

    float n2;
    cout<<"Enter another number: "<<endl;
    cin>>n2;

    switch(op)
    {
    case '+':
        cout<<"Result: "<<n1+n2<<endl;
        break;
    case '-':
        cout<<"Result: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Result: "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"Result: "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Invalid operator"<<endl;
        break;
    }
    return 0;

}