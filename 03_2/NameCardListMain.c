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
    pcard=MakeNameCard("김민수", "010-1234-5678");
    LInsert(&list, pcard);

    //한지영 추가//
    pcard=MakeNameCard("한지영", "010-9874-6532");
    LInsert(&list, pcard);

    //박철수 추가//
    pcard=MakeNameCard("박철수", "010-5555-6666");
    LInsert(&list, pcard);


    //한지영 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "한지영") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "한지영")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }
    printf("===========================\n");
    //박철수 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "박철수") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "박철수")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }
    printf("===========================\n");

    //전체 멤버 정보 출력//
    if(LFirst(&list, &pcard)){
        ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)){
            ShowNameCardInfo(pcard);
        }
    }

    printf("===========================\n");

    //박철수 정보를 조회하여 변경//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "박철수") == 0){
            ChangePhoneNum(pcard, "010-1111-2222");
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "박철수")  == 0){
                    ChangePhoneNum(pcard, "010-1111-2222");
                    break;
                }
            }
        }

    }
    printf("===========================\n");

    //박철수 정보 출력//
    if(LFirst(&list, &pcard)){
        //일치하면?
        if(NameCompare(pcard, "박철수") == 0){
            ShowNameCardInfo(pcard);
        }

        else{
            while(LNext(&list, &pcard)){
                //일치하면?
                if(NameCompare(pcard, "박철수")  == 0){
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }

    }

    printf("===========================\n");


    //김민수 삭제
    if(LFirst(&list, &pcard)){
        
        //김민수이면?
        if(NameCompare(pcard, "김민수") == 0){
            pcard=LRemove(&list);
            free(pcard);
        }

        //그렇지 않으면?
        else{
            while(LNext(&list, &pcard)){
                if(NameCompare(pcard, "김민수") == 0){
                    pcard=LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }


        
    }

    printf("=============================\n");

    //전체 멤버 정보 출력//
    if(LFirst(&list, &pcard)){
        ShowNameCardInfo(pcard);

        while(LNext(&list, &pcard)){
            ShowNameCardInfo(pcard);
        }
    }







    return 0;
}