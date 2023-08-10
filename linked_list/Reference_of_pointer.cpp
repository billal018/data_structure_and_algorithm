#include<bits/stdc++.h>
using namespace std;

void fun(int * &p)
{
    //same address
    cout<<p<<endl;
    //for difference address
    cout<<p<<endl;
}
int main()
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    //follwed same address
    cout<<ptr<<endl;
    // difference address
    cout<<&ptr<<endl;
}