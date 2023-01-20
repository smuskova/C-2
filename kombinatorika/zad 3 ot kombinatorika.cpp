#include<bits/stdc++.h>
using namespace std;
void writearr( int a[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}

int main ()
{int n, k;
    cin>>n>>k;
    int a[20]= {0};
    writearr(a,n);
    while (true)
    {
        if(a[n-1]<k-1)
        {
            a[n-1]++;
            writearr(a,n);

        }
        else
        {
            int m=n-1;
            while(m>-1 && a[m]==k-1)
            {
                a[m]=0; m--;
            }
           if(m==-1) break;
           else
           {
               a[m]++;  writearr(a,n);

           }
        }
    }

 return 0;
}
