#include <stdio.h>

int main(){
   int height, weight;
   float bmi;
   scanf("%d %d",&height,&weight);
   bmi=weight/(height*0.01*height*0.01);
   printf("%.1f",bmi);
    return 0;
}