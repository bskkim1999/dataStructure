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

    











    return 0;
}