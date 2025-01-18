#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(j==0||j==num-1||i==0||i==num-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
            cout<<endl;

    }

    
    return 0;
}