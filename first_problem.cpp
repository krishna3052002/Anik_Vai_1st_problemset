#include<bits/stdc++.h>
using namespace std;
int even_number(int A[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            count = count + 1;
        }
    }
    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
       cin>>n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
           cin>>A[i];
        }
        cout<<even_number(A, n);
    }
    return 0;
}