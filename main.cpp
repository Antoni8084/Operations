#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char ch	;
    cout<<"Enter first number:\n";
    cin>>x;
    cout<<"Enter second number:\n";
    cin>>y;
    cout<<"Enter\n+ for add\n- for sub\n* for multiply\n/ for div\n";
    cin>>ch;
    switch(ch)
    {
        case '+':
            cout<<"Add="<<(x+y);
        break;
        case '-':
            cout<<"Sub="<<(x-y);
        break;
        case '*':
            cout<<"Multiply="<<(x*y);
        break;
        case '/':
            cout<<"Div="<<(x/y);
        break;
        default:
            cout<<"Invalid input!!";
    }
}