#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50};
    mylist.push_back(100);// insert at last
    mylist.push_front(200);//insert at front  complexity o(1)
    mylist.pop_back();//delete at last node
    mylist.pop_front();//delete at front node
    mylist.insert(next(mylist.begin(),2),100);//insert at any position.
    //2 position and value 100 insert:mylist.insert(next(mylist.begin(),pos),val  //  o(n)
   mylist.erase(next(mylist.begin(),2));//delete at any position 2 is pos
    mylist.erase(next(mylist.begin(),2),next(mylist.begin(),4));//delete from 2 to 4 index
   vector<int>v={10,20,30};
   mylist.insert(next(mylist.begin(),2), v.begin(),v.end());//vector theke insert

   replace(mylist.begin(),mylist.end(),20,30);//replace 20 by 3


    for(auto val:mylist)
    {
        cout<<val<<endl;
    }

    //find value

    // auto it=find(mylist.begin(),mylist.end(),40);
    // if(it==mylist.end())
    // {
    //     cout<<"not find"<<endl;
    // }
    // else
    // cout<<*it<<endl;
    
}