#include <stdio.h>
#include "ArrayList.h"

int main(void){
    //초기화//
    List list;
    int data;
    int sum=0;

    ListInit(&list);

    //5개 데이터 저장//
    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);
    LInsert(&list, 9);

    //저장된 데이터의 전체 출력//
    printf("현재 저장된 데이터 수: %d \n", LCount(&list) );

    if(LFirst(&list, &data)){
        printf("%d ", data);

        //2번째 이후의 데이터조회//
        while(LNext(&list, &data)){
            printf("%d ", data);
        }
    }
    printf("\n\n===========================\n\n");

    //리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력//
    if(LFirst(&list, &data)){
        //printf("%d ", data);
        sum=sum+data;
        
        while(LNext(&list, &data)){
            sum=sum+data;
        }
    }

    printf("sum : %d \n", sum);

    //리스트에 저장된 값들 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제한다.//
    if(LFirst(&list, &data)){
        if(data%2==0 || data%3==0){
            LRemove(&list);
        }

        while(LNext(&list, &data)){
            if(data%2==0 || data%3==0){
                LRemove(&list);
            }
        }
    }

    //삭제 후 남은 데이터 전체 출력//
    printf("현재 데이터 수: %d \n", LCount(&list) );

    if(LFirst(&list, &data)){
        printf("%d ", data);

        //2번째 이후의 데이터조회//
        while(LNext(&list, &data)){
            printf("%d ", data);
        }
    }

    printf("\n\n===========================\n\n");




    // //숫자 22을 탐색하여 모두 삭제//
    // if(LFirst(&list, &data)){
    //     if(data==22){
    //         LRemove(&list);
    //     }

    //     while(LNext(&list, &data)){
    //         if(data==22){
    //             LRemove(&list);
    //         }
    //     }
    // }

   

    

    return 0;
}