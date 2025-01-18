#include<stdlib.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter an number ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
