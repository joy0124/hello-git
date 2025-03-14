#include <stdio.h>
int main(){
    int weight[10],height[10];
    float bmi[10];
    int count=0;
    int index[count];
    for(int i=0; i<10; i++){
        scanf("%d %d",&height[i],&weight[i]);
        bmi[i]=weight[i]/(height[i]*0.01*height[i]*0.01);
        if(bmi[i]>=25){
            count++;
            
        }
    }
        for(int i=0; i<10; i++){
            if(bmi[i]>=25){
                index[i]=i;
            }
        
        for(int i=0; i<10; i++){
            printf("%d ",index[i]);
        }
        printf("\n");
        printf("%d",count);
    }
   


    // 가장 비만인 사람 구하고 그 사람 빼고 다시 반복문을 통해서 다음으로 비만인 사람 구하기
    // 반복문 안에서 가장 비만인 사람 구하기

    
    return 0;
}