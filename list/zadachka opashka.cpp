#include<bits/stdc++.h>
#include <queue>
using  namespace  std;

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
void redica (queue<int> op)
{
    int maxi, br=0, first;

    if(op.size()<2) cout<<"nqma"<<endl;
    while(!op.empty())
    {  first=op.front(); ///vseki put kato vliza v cikula da vzema purvoto chislo, a ne samo s edno i sushto chislo da si proverqva ako e izvun cikula
       op.pop();
        if(first==op.front())
        {
            br++; maxi=br;
            op.pop();
        }


        else op.pop();
    }cout<<"chisloto, koeto se povtarq  nai- mn puti e: "<<first<<" \n to se povtarq:"<<maxi<<" "<<" puti"<<endl;

}
int main()
{
    queue<int> op;
    int n,a;
    cout<<"n=";
    cin>>n;

    create(op,n);
    write(op);
cout<<" \n_____________\n"<<endl;
redica(op);
cout<<endl;
cout<<"________";






    return 0;
}
