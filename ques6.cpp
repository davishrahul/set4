#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int count=0;
    getline(cin,name);
    for(int i=0;i<name.length();i++)
    {
        count++;
        if(isdigit(name[i])||(isalpha(name[i])))
        {
            count--;
        }
    }
    cout<<count;
    return 0;
}
