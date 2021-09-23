#include <malloc.h>
#include <stdio.h>
#define ERROR 0
#define OK 1

#define INIT_SIZE 5   /*初始分配的顺序表长度*/
#define INCREM 5      /*溢出时，顺序表长度的增量*/
typedef int ElemType; /*定义表元素的类型*/
typedef struct Sqlist
{
    ElemType *slist; /*存储空间的基地址*/
    int length;      /*顺序表的当前长度*/
    int listsize;    /*当前分配的存储空间*/
} Sqlist;

int InitList_sq(Sqlist *L);                      /*初始化分配内存空间*/
int CreateList_sq(Sqlist *L, int n);             /*创建长度为n的顺序表*/
int ListInsert_sq(Sqlist *L, int i, ElemType e); /*往表中的第i位插入元素e*/
int PrintList_sq(Sqlist *L);                     /*输出顺序表的元素*/
int ListDelete_sq(Sqlist *L, int i);             /*删除第i个元素*/
int ListLocate(Sqlist *L, ElemType e);           /*查找值为e的元素*/

int InitList_sq(Sqlist *L)
{
    L->slist = (ElemType *)malloc(INIT_SIZE * sizeof(ElemType));
    if (!L->slist)
        return ERROR;
    L->length = 0;
    L->listsize = INIT_SIZE;
    return OK;
} /*InitList*/

int CreateList_sq(Sqlist *L, int n)
{
    ElemType e;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("input data %d", i + 1);
        scanf("%d", &e);
        if (!ListInsert_sq(L, i + 1, e))
            return ERROR;
    }
    return OK;
} /*CreateList*/

/*输出顺序表中的元素*/
int PrintList_sq(Sqlist *L)
{
    int i;
    for (i = 1; i <= L->length; i++)
        printf("%5d", L->slist[i - 1]);
    return OK;
} /*PrintList*/

int ListInsert_sq(Sqlist *L, int i, ElemType e)
{
    int k;
    if (i < 1 || i > L->length + 1)
        return ERROR;
    if (L->length >= L->listsize)
    {
        L->slist = (ElemType *)realloc(L->slist,
                                       (INIT_SIZE + INCREM) * sizeof(ElemType));
        if (!L->slist)
            return ERROR;
        L->listsize += INCREM;
    }
    for (k = L->length - 1; k >= i - 1; k--)
    {
        L->slist[k + 1] = L->slist[k];
    }
    L->slist[i - 1] = e;
    L->length++;
    return OK;
} /*ListInsert*/

/*在顺序表中删除第i个元素*/
int ListDelete_sq(Sqlist *L, int i)
{
    int k;
    if (i < 1 || i > L->length )
        return ERROR;
    for (k = i - 1; k >= L->length - 1; k--)
    {
        L->slist[k] = L->slist[k - 1];
    }
    if (L->length - L->listsize >= INCREM)
    {
        L->slist = (ElemType *)realloc(L->slist,
                                       (INIT_SIZE - INCREM) * sizeof(ElemType));
        if (!L->slist)
            return ERROR;
        L->listsize -= INCREM;
    }
    L->length--;
    return OK;
}
/*在顺序表中查找指定值元素，返回其序号*/
int ListLocate(Sqlist *L, ElemType e)
{

}

int main()
{
    Sqlist sl;
    int n, m, k;
    printf("please input n:"); /*输入顺序表的元素个数*/
    scanf("%d", &n);
    if (n > 0)
    {
        printf("\n1-Create Sqlist:\n");
        InitList_sq(&sl);
        CreateList_sq(&sl, n);
        printf("\n2-Print Sqlist:\n");
        PrintList_sq(&sl);
        printf("\nplease input insert location and data:(location,data)\n");
        scanf("%d,%d", &m, &k);
        ListInsert_sq(&sl, m, k);
        printf("\n3-Print Sqlist:\n");
        PrintList_sq(&sl);
        printf("\n");
    }
    else
        printf("ERROR");

    system("pause");
    return 0;
}
