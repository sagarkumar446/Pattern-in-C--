#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+i;j++)
        {
            if(j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;

    }



    return 0;

}