#include<bits/stdc++.h>
using namespace std;
void create(stack<int>&a)
{
    int x;
    while(cin>>x)
    {
        a.push(x);
    }
    cin.clear();
}
void gift (stack<int > &a, stack<int > &b, stack<int > &c )
{ int k;
    while(!a.empty())
    { k=a.top();
        b.push(k);
        a.pop();
    }
    while (a.empty() and !b.empty())
        /* dokato a e prazna i b e neprazna, zashtoto a veche s predishniq
        while e izprznena*/
    {
        while(b.top()<c.top())
        {
            a.top()=b.top();

        } c.top()=b.top();
    }
}
int main ()
{
    stack<int > a;
     stack<int > b;
      stack<int > c;
      create(a);
      cout<<"________________"<<endl;
      create(c);
      gift(a,b,c);



 return 0;
}
