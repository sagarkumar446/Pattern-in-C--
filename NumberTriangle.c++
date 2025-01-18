#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int num;
    cout<<"enter a number should be odd";
    cin>>num;
    if(num%2==0)
    {
        cout<<"please enter a odd number this number is even";
    }
    else{
        for(int i=0;i<num;i++)
        {

            for(int j=1;j<num*2;j++)
            {
                if(j>=num-i&&j<=num+i)
                {
                    cout<<i+1;
                    
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;

        }
    }


    return 0;
}