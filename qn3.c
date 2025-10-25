#include<stdio.h>
int main (){
int range , squared , cubed;
printf("enter a range (a positive integer): \n");
scanf("%d", &range);
printf(" number   squared   cubed \n");
for(int i = 1 ; i<= range ; i++ ){
    squared = i*i;
    cubed = i*i*i;
    printf("  %d         %d          %d\n", i , squared , cubed);


}



return 0;
}
