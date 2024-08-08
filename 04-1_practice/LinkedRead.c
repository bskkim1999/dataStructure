#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node* next;
}Node;

int main(void){

    Node* head = NULL;
    Node* tail = NULL;
    Node* cur = NULL;

    Node* newNode = NULL;
    int readData;

    //데이터를 입력 받는 과정//
    while(1){
        printf("자연수 입력:");
        scanf("%d", &readData);

        //노드의 추가과정//
        newNode = (Node*) malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if(head==NULL){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }
        tail=newNode;
    }

    printf("\n\n");

    //입력 받은 데이터의 출력과정//
    








    return 0;
}