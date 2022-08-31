#include<iostream>

using namespace std;

int main()
{
    int a [10] = {1,2,3,4};
    int b [10] = {1,2,3,4};
    int c[10];

    for(int x =0; x<4; x++)
    {
        c[x]= a[x] * b[x];
    }
    cout<<"done"<<endl;
    return 0;
}