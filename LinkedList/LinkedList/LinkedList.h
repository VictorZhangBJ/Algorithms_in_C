//
//  LinkedList.h
//  LinkedList
//
//  Created by mini4s215 on 12/22/15.
//  Copyright © 2015 victor. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 typedef struct Node
{
    int num;
    struct Node *next;
} Node, *LinkList;

//create node
LinkList create_node(int num);

//creat list
void create_list(LinkList *head,int node_count);

void create_list_head(LinkList *head, int node_count);

//traverse the list
int show_list(LinkList *head);

//insert node
void insert_node(int index, LinkList *head);

//delete node
void delete_node(int index, LinkList *head);

#endif /* LinkedList_h */
