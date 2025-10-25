#include<stdio.h>
int main(){
int num[5] , a , b , c , temp;
printf("enter 3 numbers  : ");
scanf("%d %d %d", &a, &b, &c);
num[0] = a;
num[1] = b;
num[2] = c;
for (int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<2 ; j++){
        if (num[j]>num[i]){
            temp =  num[j];
            num[j]= num[i];
            num[i] = temp;
        }


    }
}
for(int i = 0 ; i <= 2 ;i++ ){
    printf("num[%d] = %d \n", i , num[i]);
}
return 0;
}
