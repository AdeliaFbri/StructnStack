#include <iostream>
using namespace std;
#define MAXSTACK 5

typedef int ItemType;

/* Definisi struktur stack */
typedef struct{
    ItemType Item[MAXSTACK];
    int Count;
}Stack;

void InitializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}

void Pop(Stack *S, ItemType *x){
    if(Empty(S)){
        cout <<"Stack masih kosong!" << endl;
    }else{
        S->Count--;
        *x = S->Item[S->Count];
    }
}

void Push(ItemType x, Stack *S){
    if(Full(S)){
        cout <<"Stack penuh! Data tidak dapat masuk!" <<endl;
    }else{
        S->Item[S->Count] = x;
        S->Count++;
    }
}

/* Uji Coba */
int main(){
    Stack S;
    InitializeStack(&S);

    Push(1, &S);
    Push(2, &S);
    Push(3, &S);
    Push(4, &S);

    int value;
    Pop(&S, &value);
    cout << "Data yang ditampilkan:" << value <<endl;

    return 0;
}