//
//  LinkedList.c
//  LinkedList
//
//  Created by mini4s215 on 12/22/15.
//  Copyright © 2015 victor. All rights reserved.
//

#include "LinkedList.h"

//create node
LinkList create_node(int num)
{
    LinkList p = (LinkList)malloc(sizeof(Node));
    p->num = num;
    p->next = NULL;
    return p;
}

//create list,append the tail
void create_list(LinkList *head,int node_count)
{
    //init rand time
    srand((unsigned)time(0));
    //头指针，指向一个结点
    *head = (LinkList)malloc(sizeof(Node));
    LinkList tail = *head;
    tail->num = rand() %100 + 1;
    for(int i=0; i<node_count-1; i++){
        int num = rand() % 100 + 1;
        LinkList p = (LinkList)malloc(sizeof(Node));
        p->num = num;
        tail->next = p;
        tail = p;
    }
}
void create_list_head(LinkList *head, int node_count)
{
    //init rand time
    srand((unsigned)time(0));
    //头指针，指向一个结点
    *head = (LinkList)malloc(sizeof(Node));
    (*head)->num = rand() %100 + 1;

    for(int i=0; i<node_count-1; i++){
        int num = rand() % 100 + 1;
        LinkList p = (LinkList)malloc(sizeof(Node));
        p->num = num;
        p->next = *head;
        *head = p;
        
    }
}

//traverse the list,return the element count of the list
int show_list(LinkList *head)
{
    int i=0;
    if (head == NULL) {
        printf("遍历时，head 为空\n");
    }
    LinkList p = *head;
    if (p==NULL) {
        printf("遍历时p空\n");
    }
    
    while (p!= NULL) {
        printf("num %d\n",p->num);
        i++;
        p = p->next;
    }
    return i;
}

//insert node
void insert_node(int index, LinkList *head)
{
    LinkList p = *head;
    LinkList prev = *head;
    
    LinkList node = (LinkList)malloc(sizeof(Node));
    node->num = 111;
    
    int count = 0;
    while (prev) {
        if (count == index) {
            if (index==0) {
                node->next = (*head)->next;
                *head = node;
                return;
            }else{
                node->next = prev->next;
                prev->next = node;
                return;
            }
        }
        if (!p) {
            printf("index  = %d值超出链表边界\n",index);
            return;
        }
        prev = p;
        p=p->next;
        count++;
    }
}

//delete node
void delete_node(int index, LinkList *head)
{
    LinkList p = *head;
    LinkList prev = p;
    int i = 0;
    while (p) {
        if (i==index) {
            if (index == 0) {
                *head = p->next;
                free(p);
                printf("删除成功\n");
                return;
            }else{
                prev->next = p->next;
                free(p);
                printf("删除成功\n");
                return;
            }
        }
        prev = p;
        p= p->next;
        i++;
    }
    printf("删除的index = %d 越界！\n",index);
}







