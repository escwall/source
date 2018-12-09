#include<bits/stdc++.h>
using namespace std;

#define MAX_N 1000000
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int len,n;
        cin >> len >> n;
        static int x[MAX_N];
        for(int i = 0;i<n;i++) cin >> x[i];
        int mint,maxt;
        mint=maxt=0;
        int j;
        for(j=0;j<n;j++)
        {
            maxt=max(maxt,max(x[j],len-x[j]));
            mint=max(mint,min(x[j],len-x[j]));
        }
        cout << mint <<" "<< maxt <<endl;
    }
    return 0;
}