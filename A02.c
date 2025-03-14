#include <stdio.h>
int main(){// A02 완료!
    int height, weight;
    float bmi;
    scanf("%d %d",&height,&weight);
bmi= weight/(height*height*0.01*0.01);
if(bmi>=25){
    printf("%.1f Overweight",bmi);
} else {
    printf("%.1f Normal",bmi);
}
    return 0;
}