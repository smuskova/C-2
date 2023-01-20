#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> lst;
    int a;
    cin>>a;
    while(!cin.eof())
    {
        lst.push_back(2*a);
        cin>>a;
    }
   // list <int> lst=2*n;
    int p=lst.size();
    for(int i=0; i<p; i++)
    {
        int mid=p/2;
        if(mid-lst.front()==lst.back()-mid) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
