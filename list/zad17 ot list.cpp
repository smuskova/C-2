#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> lst;
    int n;
    cout<<"n="; cin>>n;
    int k=(2*n);
    int a;

    cin>>a;
    while(a<=k)
    {
    while(!cin.eof())
    {
        lst.push_back(2*a);
        cin>>a;
    }
    int p=lst.size();
    for(int i=0; i<p; i++)
    {
        cout<<lst.front()<<endl;
        lst.pop_back();
    }
    }
    int s=0;
    for(int i=0; i<=k; i++)
    {
        s=lst.front()*lst.back()+s;
        lst.pop_front();
        lst.pop_back();
    }
    cout<<s<<" "<<endl;
    int m;
     for(int i=0; i<=k; i++)
    {
        m=max(min(lst.front(), lst.back()));
        lst.pop_front();
        lst.pop_back();
    }
    cout<<m<<endl;




 return 0;
}
