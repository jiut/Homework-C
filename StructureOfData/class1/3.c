#include <malloc.h>
#include <stdio.h>
#define ERROR 0
#define OK 1
typedef int ElemType; /*定义表元素的类型*/
typedef struct LNode
{ /*线性表的单链表存储*/
    ElemType data;
    struct LNode *next;
} LNode, *LinkList; //*LinkList为LNode类型的指针

LinkList CreateList(int n)
{
    LNode *p, *q, *head;
    int i;
    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;
    p = head;
    for (i = 0; i < n; i++)
    {
        q = (LinkList)malloc(sizeof(LNode));
        printf("input data %i:", i + 1);
        scanf("%d", &q->data); /*输入元素值*/
        q->next = NULL;        /*结点指针域置空*/
        p->next = q;           /*新结点连在表末尾*/
        p = q;
    }
    q = head;
    head = head->next;
    p->next = head;
    free(q);
    return head;
} /*CreateList*/

void PrintList(LinkList L, int n)
{
    LNode *p;
    p = L; /*p指向单链表的第1个元素*/
    int flag;
    for (flag = 1; flag <= n; flag++)
    {
        printf("%5d", p->data);
        p = p->next;
    }
} /*PrintList*/

LinkList ListDelete(LinkList L, int i, int m)
{
    LNode *p, *prev;
    int j = 1;
    p = L;

    while (j < i)
    {
        prev = p;
        p = p->next;
        j++;
    }

    while (p != p->next)
    {
        j = 1;
        while (j < m)
        {
            j++;
            prev = p;
            p = p->next;
        }
        prev->next = p->next;
        if( p == L)
            L = L->next;
        free(p);
        p = prev->next;
    }

    return L;
}

int main()
{
    int n, i, m;
    LinkList L = NULL;         /*定义指向单链表的指针*/
    printf("please input n:"); /*输入单链表的元素个数*/
    scanf("%d", &n);
    if (n > 0)
    {
        printf("\n1-Create LinkList:\n");
        L = CreateList(n);
        printf("\n2-Print LinkList:\n");
        PrintList(L, n);
        printf("\n3-DeleteElem from LinkList:\n");
        printf("input i,m=(i,m)\n");
        scanf("%d,%d", &i, &m);
        PrintList(ListDelete(L, i, m), 1);
    }
    else
        printf("ERROR");

    system("pause");
    return 0;
}
