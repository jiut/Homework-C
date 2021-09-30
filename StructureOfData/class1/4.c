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

LinkList CreateList(int n); /*创建链表*/
void PrintList(LinkList L); /*输出带头结点单链表的所有元素*/

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

int main()
{
    int n;
    LinkList L = NULL;         /*定义指向单链表的指针*/
    printf("please input n:"); /*输入单链表的元素个数*/
    scanf("%d", &n);
    if (n > 0)
    {
        printf("\n1-Create LinkList:\n");
        L = CreateList(n);
        printf("\n2-Print LinkList:\n");
        PrintList(L);

        LNode *p, *q, *prev;
        int flag;
        p = L->next;
        while (p != NULL)
        {
            prev = p;
            q = p->next;
            flag = p->data;
            while (q != NULL)
            {
                if (q->data == flag)
                {
                    prev->next = q->next;
                    free(q);
                    q = prev->next;//此时prev不需要改变
                }
                else
                {
                    prev = prev->next;
                    q = q->next;
                }
            }
            p = p->next;
        }

        printf("\n3-Print LinkList\n");
        PrintList(L);
    }
    else
        printf("ERROR");

    system("pause");
    return 0;
}
