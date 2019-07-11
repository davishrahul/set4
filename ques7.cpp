#include<iostream>
using namespace std;
int main()
{
    int temp,number1,number2;
    cin>>number1>>number2;
    temp=number1;
    number1=number2;
    number2=temp;
    cout<<number1<<" "<<number2;
    return 0;
}
