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
{
    int n, k;
    cin>>n>>k;
    int a[20]= {1,2,3,4,5,6};
    writearr(a,n);
    int suma1=0, suma2=1;

    for(int i=0; i<n; i++)
    {
        suma1=suma1+a[i];
        suma1=suma1-a[i];
        suma2=suma2*a[i];
        suma2=suma2/a[i];
        if(suma1+a[i]==k)cout<<"subirane"<<" "<<suma1<<endl;
        else
        {
            if(suma1-a[i]== k) cout<<"izvajdane"<<" "<<suma1<<endl;
            else
            {
                if(suma2*a[i]==k)cout<<"umnojenie"<<" "<<suma2<<endl;
                else
                {
                    if(suma2/a[i]==k)cout<<"delenie"<<" "<<suma2<<endl;
                }
            }
        }

    }

    return 0;
}
