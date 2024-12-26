#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void josephus(int n,int k,int* tab);

int main()
{
    int i,n,k;
    int* tab;
    char ch;
    do{
    printf("Podaj n=");
    scanf("%d",&n);
    printf("Podaj k=");
    scanf("%d",&k);
    tab=(int*)malloc(n*sizeof(int));
    josephus(n,k,tab);
    for(i=0;i<n;i++)
        if(tab[i]!=0) printf("%d %s",i+1," ");
    printf("\n");
    free(tab);
    ch=getch();
    }
    while(ch!=27);
    return 0;
}

void josephus(int n,int k,int* tab)
{
    int i,j,c=n;
    for(i=0;i<n;i++)
    tab[i]=1;
    i=0;
    j=0;
    while(c>=2)
    {
        j+=tab[i];
        if(j==k) {
            tab[i]=0;
            j=0;
            c--;
        }
        i=(i+1)%n;
    }
}
