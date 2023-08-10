#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50,60,70};
    mylist.remove(10);
    mylist.sort();//for sort assecnding o(nlogn)
    mylist.sort(greater<int>());//dessending
    mylist.unique() ;//complexit o(n) if sort.otherwise o(nlogn)
    mylist.reverse();//reverse mylist
    cout<<mylist.front();//access head
    cout<<mylist.back();// access last value
    cout<<*next(mylist.begin(),3)<<endl;//access any pos value

    for(auto val: mylist)
    {
        cout<<val<<endl;
    }


}