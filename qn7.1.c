#include<stdio.h>
int main () {
int n;
printf("enter no of rows :");
scanf("%d", &n);
for(int i =1 ; i<=n; i++){
    if (i==1){
        printf("#####\n");
    }
    else if (i>1 && i<n){
        printf("#   #\n");
    }
    if(i==n){
        printf("#####");
    }

}



return 0;
}

