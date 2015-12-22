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

//create list
LinkList create_list(int node_count)
{
    //init rand time
    srand((unsigned)time(0));
    LinkList head,tail;
    int i = 0;
    //头指针，指向一个结点
    head = (LinkList)malloc(sizeof(Node));
    head->num = rand() %100 + 1;
    tail = head;
    for(i=0; i<node_count; i++){
        int num = rand() % 100 + 1;
        LinkList p = create_node(num);
        tail->next = p;
        tail = p;
    }
    return head;
}

//traverse the list,return the element count of the list
int show_list(LinkList head)
{
    int i=0;
    LinkList p = head;
    while (p->next != NULL) {
        printf("num %d\n",p->num);
        i++;
        p = p->next;
    }
    return i;
}
