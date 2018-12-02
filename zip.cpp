#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
//a5b3aba13b4
int main()
{
    char ch[100]={0};
    cin >>ch;
    int len = strlen(ch);
    int i;
    for(i=0;ch[i]!='\0';)
    {
        if(ch[i+1]>'0'&&ch[i+1]<='9')
        {
            if(ch[i+2]>'0'&&ch[i+2]<='9')
            {
                int time=(ch[i+1]-'0')*10+ch[i+2]-'0';
                while(time--) cout<<ch[i];
                i+=3;
            }
            else 
            {
                int temp=ch[i+1]-'0';
                while(temp--) cout<<ch[i];
                i+=2;
            }
        }
        else {cout<<ch[i];i++;}
    }
    return 0;
}