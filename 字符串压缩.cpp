#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	char arr[52];
	gets(arr);
	int i;
	for(i=0;arr[i]!='\0';++i)
	{
		if(arr[i]>='0'&&arr[i]<='9'){
			int t=arr[i];
			while(t--) cout<<arr[i+1];
		}
		else if(arr[i+1]<'0'||arr[i+1]>'9') cout<<arr[i+1];
	}
	return 0;
}
