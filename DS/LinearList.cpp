#include <stdio.h>

#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int length;
} SqList;

// 初始化线性表
void InitList(SqList &L) {
    L.length = 0;
}

// 在指定位置插入元素 e
bool InsertList(SqList &L, int i, int e) {
    // 判断位置合法性
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    // 表满
    if (L.length >= MaxSize) {
        return false;
    }
    // 表中元素依次后移
    for (int j = L.length; j >= i - 1; j--) {
        L.data[j] = L.data[j - 1];
    }
    // 插入
    L.data[i - 1] = e;
    L.length++;
    return true;
}

// 打印线性表
void PrintList(SqList L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d,", L.data[i]);
    }

}
// 删除指定位置元素
bool DeleteList(SqList &L,int i,int &e){
    // 越界、判空判断
    if(i < 1 || i > L.length || L.length == 0){
        return false;
    }
    e = L.data[i-1];
    // 依次前移删除
    for(int j=i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    // 表长-1
    L.length--;
    return true;
}

int main(void) {
    SqList L;
    InitList(L);
    // bool b = InsertList(L,3,1);
    // printf("%d",b);
    InsertList(L, 1, 5);
    InsertList(L, 2, 4);
    InsertList(L, 3, 3);
    InsertList(L, 4, 2);
    InsertList(L, 5, 1);
    PrintList(L);
    printf("\n");
    int e ;
    DeleteList(L,99,e);
    PrintList(L);
    printf("\n%d",e);
}