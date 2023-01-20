#include <iostream>
#include <cstdlib>
#include <cmath>
#include<bits/stdc++.h>

using  namespace  std;
void create(stack<int>&a)
{
    int x;
    while(cin>>x)
    {
        a.push(x);
    }
    cin.clear();
}
void gift (stack< int> first, stack<int > help, vector< int> v, int n)
{
    for(int i=0; i<n; i++)
    {
        if(!help.empty() && v[i] >= help.top())
        {
            while(v[i]>help.top())
            {
                first.push(help.top());
                help.pop();
                cout<<1<<"";
            }
            help.pop();
            cout<<2<<" ";
        }
        else
        {
            while(!first.empty() && first.top()>=v[i])
            {
                help.push(first.top());
                first.pop();
                cout<<3<<" ";
            }
            help.pop();
            cout<<2<<" ";
        }
    }
}
int main()

{
    cout<<"suzdai purviq stek:"<<endl;
    stack<int > first;
    create(first);
    stack< int> help;
    vector<int>v;
    int n,a;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        cout<<"a=";
        cin>>a;
        v.push_back(i);
    }

    cout<<"_____________"<<endl;
    gift(first, help, v, n);







    return 0;
}
