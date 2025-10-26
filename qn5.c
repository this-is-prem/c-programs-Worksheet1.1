#include<stdio.h>
int main(){
int n , m , k;
printf("enter no of tables : ");
scanf("%d",&n);
printf("\n enter no of rows :");
scanf("%d", &m);
for( int i = 1 ; i<=n ; i++){
    for( int j = 1 ; j<= m ; j++){
       k = i*j;
       printf("%d * %d = %d\n", i , j , k);

    }
 printf("\n");
}


return 0;
}
