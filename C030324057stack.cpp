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
    return (S->Count == 0);
}

int Empty(Stack *S){
    return (S->Count == 0);
}