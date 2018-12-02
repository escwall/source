#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int n,m,t;
        cin >> n >> m >> t;
        int val1,val2;
        val1=2*n,val2=2*m;
        int coe[100]={0};
        int ar1[val1],ar2[val2];
        int i,j,k=0;
        for(i=0;i<val1;i++) cin >> ar1[i];
        for(j=0;i<val2;j++) cin >> ar2[j];
        int t1,t2;
        t1=strlen((char*)ar1),t2=strlen((char*)ar2);
        if(!t){
        if(t1>=t2)
        {
            for(i=1;i<val2;i+=2)
                for(j=1;j<val1;j+=2)
                {
                    if(ar1[j]==ar2[i]){
                    coe[j-1]=ar1[j-1]+ar2[i-1];
                    }
                }
        }
        else
        {
            for(i=1;i<val1;i+=2)
                for(j=1;j<val2;j+=2)
                {
                    if(ar1[j]==ar2[i]){
                    coe[i-1]=ar1[j-1]+ar2[i-1];
                    }
                }
        }
        
    }
    }
    return 0;
}