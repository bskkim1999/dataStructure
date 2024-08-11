#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void){

    List list;
    NameCard* pcard;

    //linked list 초기화//
    ListInit(&list);

    //김민수 추가//
    pcard=MakeNameCard("KimMinSu", "010-1234-5678");
    LInsert(&list, pcard);

    //한지영 추가//
    pcard=MakeNameCard("HanGeeYoung", "010-9874-6532");
    LInsert(&list, pcard);

    //박철수 추가//
    pcard=MakeNameCard("ParkChulSu", "010-5555-6666");
    LInsert(&list, pcard);


    //한지영 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "HanGeeYoung") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "HanGeeYoung")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }
    printf("1===========================\n");
    //박철수 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "ParkChulSu") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "ParkChulSu")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }
    printf("2===========================\n");

    //전체 멤버 정보 출력//
    if(LFirst(&list, &pcard)){
        ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)){
            ShowNameCardInfo(pcard);
        }
    }

    printf("3===========================\n");

    //박철수 정보를 조회하여 변경//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "ParkChulSu") == 0){
            ChangePhoneNum(pcard, "010-1111-2222");
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "ParkChulSu")  == 0){
                    ChangePhoneNum(pcard, "010-1111-2222");
                    break;
                }
            }
        }

    }
    printf("4===========================\n");

    //박철수 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "ParkChulSu") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "ParkChulSu")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }

    printf("5===========================\n");


    //김민수 삭제
    if(LFirst(&list, &pcard)){
        
        //김민수이면?
        if(NameCompare(pcard, "KimMinSu") == 0){
            pcard=LRemove(&list);
            free(pcard);
        }

        //그렇지 않으면?
        else{
            while(LNext(&list, &pcard)){
                if(NameCompare(pcard, "KimMinSu") == 0){
                    pcard=LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }


        
    }

    printf("6=============================\n");

    //전체 멤버 정보 출력//
    if(LFirst(&list, &pcard)){
        ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)){
            ShowNameCardInfo(pcard);
        }
    }







    return 0;
}