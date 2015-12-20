#include <stdio.h>

/*链表结点的数据结构定义 */
typedef struct Node
{
	int num;
	struct Node *next;
}Node, *LinkList;

//创建一个结点,head 是表的头指针
LinkList create_node(int num)
{
	LinkList p = (LinkList)malloc(sizeof(Node));
	p->num = num;
	p->next = NULL;
	return p;
}

int main()
{
	return 0;
}
