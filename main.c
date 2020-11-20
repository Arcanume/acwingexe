#include<stdio.h>

int main(){
    int n;
    int i=0;
    while(scanf("%d",&n)!=EOF){
        if(i!=0){
            printf("\n");
        }
        i++;
        printf("%d\n",n*(n+1)/2);
    }
    return 0;
}