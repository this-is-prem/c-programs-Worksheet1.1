#include<stdio.h>
int main(){
int range , i = 1;
printf("enter a range (a positive integer) :");
scanf("%d", &range);
while(i<=range){
    if(i%2 != 0){
        printf("%d\n", i);
    }
    i++;
}


return 0;
}
