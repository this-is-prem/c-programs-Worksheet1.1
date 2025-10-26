#include<stdio.h>
int main(){
int n , m;
printf("enter no of rows : ");
scanf("%d", &n);
m=n;
for(int i = 1 ; i<=n; i++){
         for(int k = 1 ; k<i ; k++){
            printf(" ");
         }
    for( int j=1; j<=m;j++){
        printf("%d", j);
    }
    m -=1;
    printf("\n");
}


return 0;
}
