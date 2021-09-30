#include <malloc.h>
#include <stdio.h>
#define ERROR 0
#define OK 1
typedef int ElemType; /*定义表元素的类型*/
typedef struct LNode
{ /*线性表的单链表存储*/
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;//*LinkList为LNode类型的指针

LinkList CreateList(int n);                  /*创建链表*/
void PrintList(LinkList L);                  /*输出带头结点单链表的所有元素*/
int GetElem(LinkList L, int i, ElemType *e); /*输出链表中的第i个元素*/

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
    return head;
} /*CreateList*/

void PrintList(LinkList L)
{
    LNode *p;
    p = L->next; /*p指向单链表的第1个元素*/
    while (p != NULL)
    {
        printf("%5d", p->data);
        p = p->next;
    }
} /*PrintList*/

int GetElem(LinkList L, int i, ElemType *e)
{
    LNode *p;
    int j = 1;
    p = L->next;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return ERROR;
    *e = p->data;
    return OK;
} /*GetElem*/

int ListInsert(LinkList L, int i, ElemType e){
    LNode *p, *n;
    n = (LinkList)malloc(sizeof(LNode));
    n->data = e;

    int j = 1;
    p = L;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return ERROR;
    n->next = p->next;
    p->next = n;
    return OK;
}

int ListDelete(LinkList L, int i){
    LNode *p, *q;
    int j = 1;
    p = L;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return ERROR;
    q = p->next;
    p->next = q->next;
    free(q);
    return OK;
}

int main()
{
    int n, i;
    ElemType e;
    LinkList L = NULL;         /*定义指向单链表的指针*/
    printf("please input n:"); /*输入单链表的元素个数*/
    scanf("%d", &n);
    if (n > 0)
    {
        printf("\n1-Create LinkList:\n");
        L = CreateList(n);
        printf("\n2-Print LinkList:\n");
        PrintList(L);
        printf("\n3-GetElem from LinkList:\n");
        printf("input i=");
        scanf("%d", &i);
        if (GetElem(L, i, &e))
            printf("No%i is %d", i, e);
        else
            printf("not exists");
        printf("\n4-InsertElem from LinkList:\n");
        printf("\nplease input insert location and data:(location,data)\n");
        scanf("%d,%d", &i, &e);
        if (ListInsert(L, i, e))
            PrintList(L);
        else
            printf("ERROR");
        printf("\n5-DeleteElem from LinkList:\n");
        printf("input i=");
        scanf("%d", &i);
        if (ListDelete(L, i))
            PrintList(L);
        else
            printf("ERROR");
    }
    else
        printf("ERROR");

    system("pause");
    return 0;
}
