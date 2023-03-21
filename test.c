#include<time.h>
#include<stdio.h>
#include<locale.h>


int main(){
    time_t start, end;
    double it_1, it_2;
    printf("введите нужные вам числа: ");
    scanf("%d%d", &it_1, &it_2);
    if(it_1 < it_2){
        for(; it_1 < it_2; it_1++){
            printf("%i; \n");
        };
        printf("")
    }
    else{
        for(; it_2 < it_1; it_2 ++){
            printf("%i; \n");
        }
    }
    return 0;


}