#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(b>=c) printf("-1\n");
    else printf("%d\n",a/(c-b)+1);
    return 0;
}
