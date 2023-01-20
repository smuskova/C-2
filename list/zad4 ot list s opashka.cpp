#include<bits/stdc++.h>
using namespace std;
void create (queue<int> &op, int n)
{
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        op.push(a);

    }
}
void write(queue<int > op)
{
    while(!op.empty())
    {
        cout<<op.front()<<" ";
        op.pop();
    }
}
bool dali (queue< int > op)
{ queue<int > op1;
    int first;

    while(!op.empty())
    {
        first= op.front(); op.pop();
        op1=op;
        while(!op1.empty())
        {
            if(op1.front()==first) return false;
            op1.pop();

        }


    } return true;
}
int main ()
{
    queue<int> op;
    int n,a;
    cout<<"n=";
    cin>>n;

    create(op,n);
    write(op);
    cout<<endl;
    cout<<"_________"<<endl;
    if(dali(op)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
