#include <stdio.h>

int main(){
    int temp;
    printf("please input temperature");
    scanf("%d",&temp);
    if(temp < 0){
    printf("the weather is freezing");
}
    else if (temp >= 0 && temp <= 10){
        printf("the weather is very cold");
}
    else if (temp >= 10 && temp <=20){
        printf("the weather is cold");
    }
    else if (temp >= 20 && temp <=30){
        printf("the weather in normal");
    }
    else if (temp >=30 && temp <= 40){
        printf("the weather is hot");
    }
    else if (temp >= 40 && temp<=50){
        printf("the weather is very hot");
    }
    return 0;




}
