#include<cstdio>
#include<vector>
using namespace std;
int cnt[100],index_[100];
void swap(int &a,int &b){
    a=a^b;b=a^b;a=a^b;
}
int main() {
    int T;scanf("%d", &T);
    while (T--) {
        int m,n,s;
        scanf("%d %d %d", &m, &n, &s);
        for (int i = 0; i < m; i++)
            scanf("%d %d", &cnt[i], &index_[i]);
        for (int i = m; i < m + n; i++) 
            scanf("%d %d", &cnt[i], &index_[i]);
        if (s) {
            for(int i=m;i<m+n;i++)
                cnt[i] = -cnt[i];
        }
        
        for (int i = 0; i < m + n; i++)
            for (int j = 0; j < m + n; j++) 
                if (index_[i] < index_[j]) {
                    swap(index_[i],index_[j]);
                    swap(cnt[i],cnt[j]);
                }
        int i = 0,o=m+n;
        while (i < o-1) {
            if (index_[i] == index_[i + 1]) {
                for (int j = i; j < o-1; j++)
                    index_[j] = index_[j + 1];
                cnt[i] = cnt[i] + cnt[i + 1];
                for (int j = i + 1; j < o - 1; j++)
                    cnt[j] = cnt[j + 1];
                o--;
            }
            else
                i++;
        }
        if (cnt[0] != 0 && cnt[0] != 1 && cnt[0] != -1 && index_[0] != 1 && index_[0] != 0)
            printf("%dx^%d", cnt[0], index_[0]);
        if (cnt[0] != 0 && cnt[0] != 1 && cnt[0] != -1 && index_[0] == 1)
            printf("%dx", cnt[0]);
        if (cnt[0] == 1 && index_[0] != 0 && index_[0] != 1)
            printf("x^%d", index_[0]);
        if (cnt[0] == 1 && index_[0] == 1)
            printf("x");
        if (cnt[0] == -1 && index_[0] == 1)
            printf("-x");
        if (cnt[0] == -1 && index_[0] != 0 && index_[0] != 1)
            printf("-x^%d", index_[0]);
        if (cnt[0] != 0 && index_[0] == 0)
            printf("1");
        for (i = 1; i < o; i++) {
            if(cnt[i]==1){
                if(index_[i]!=1){
                    if(index_[i]!=0)
                        printf("+x^%d", index_[i]);
                }
                else printf("+x");
            }
            if (cnt[i] == -1 && index_[i] == 1)
                printf("-x");
            if (cnt[i] == -1 && index_[i] != 1 && index_[i] != 0)
                printf("-x^%d", index_[i]);
            if (cnt[i] != 1 && cnt[i] != 0 && cnt[i] != -1 && index_[i] != 1 && index_[i] != 0) {
                if(cnt[i]>=0)printf("+");
                printf("%dx^%d", cnt[i], index_[i]);
            }
            if (cnt[i] != 1 && cnt[i] != 0 && cnt[i] != -1 && index_[i] == 1) {
                if(cnt[i]>=0)printf("+");
                printf("%dx", cnt[i]);
            }
            if (cnt[i] != 0 && index_[i] == 0)
                printf("1");
        }
        printf("\n");
    }
}


