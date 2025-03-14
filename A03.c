#include <stdio.h>
int main(){
    int n;
    printf("The number of the people\n");
    scanf("%d",&n);
    int weight[n],height[n];
    float bmi[n];
    int count=0;
    int i;
    for(i=0; i<n; i++){
        scanf("%d %d",&height[i],&weight[i]);
        bmi[i]=(float) weight[i]/(height[i]*height[i]*0.01*0.01);
        if(bmi[i]>=25){
            count++;
        }
    }
    printf("output2\n");
    printf("%d",count);
    return 0;
}