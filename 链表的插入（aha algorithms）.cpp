#include<bits/stdc++.h>
using namespace std;

// int cmp1(int a,int b)  
// {  
//     return a>b;  
// }  
struct NodeList{
    int data;
    struct NodeList* next;
};
int main()
{
    struct NodeList *p,*q,*t,*head,*tail;
    int i,n,a;
    cin >> n;
    head = NULL;
    for(i=1;i<=n;i++)
    {
        cin >> a;
        p=(struct NodeList *)malloc(sizeof(struct NodeList));
        p->data=a;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            q->next=p;
        q=p;
    }

    cin >> a;
    t=head;
    while(t!=NULL)
    {
        if(t->next->data>a)
        {
            p=(struct NodeList *)malloc(sizeof(struct NodeList));
            p->data=a;
            p->next=t->next;
            t->next=p;
            break;
        }
        t=t->next;
    }
    t=head;
    while(t!=NULL)
    {
        cout << t->data << " ";
        t=t->next;
    }
    return 0;
}