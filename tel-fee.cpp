#include<stdio.h>
#include<string.h>
main()
{   char a[4];
    int n,m=0;
    double k;
    FILE *fp;
    if((fp=fopen("fee.txt","r"))!=NULL) 
         //printf("File could not be opened\n");
     {
        fscanf(fp,"%s %d",a,&n);
        while(!feof(fp)){
            if(strcmp(a,"OUT")==0) m+=n;
            //printf("%s%4d\n",a,n);
            fscanf(fp,"%s %d",a,&n);
        }
    }
    if(m/180==0) k=(double)(m/180)*0.17;
    else k=(double)(m/180+1)*0.17;
    printf("%.2lf",k);
    fclose(fp);
}