#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int max,min = arr[0];

    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }

    cout<<"Minimun number is "<<min<<endl;
    cout<<"Maximum number is "<<max<<endl;

    return 0;
}