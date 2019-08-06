#include <iostream>
 using namespace std;
int main()
{
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    } 
    int max =arr[0];
    for(int j=0;j<number;j++)
    {
        if(max<arr[j])
        {
            min=arr[j];
        }

    }
    cout<<max;
    return 0;
}
