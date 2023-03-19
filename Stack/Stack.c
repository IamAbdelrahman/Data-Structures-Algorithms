#include "Stack.h"
#define StackEntry  int
#define MAXSTACK    100

void createStack(Stack *Ptrs)
{
    Ptrs->top = 0;
}

void Push (StackEntry e, Stack *Ptrs)
{
    Ptrs->entry[Ptrs->top] = e;
    Ptrs->top++;
}

int Push_2 (StackEntry e, Stack *Ptrs)
{
    if (Ptrs->top == MAXSTACK)
        return 0;

    else
    {
        Ptrs->entry[Ptrs->top++] = e;
        return 1;
    }
}

int StackFull(Stack *Ptrs)
{
    return (Ptrs->top == MAXSTACK);
}

int StackEmpy(Stack *Ptrs)
{
    return (Ptrs->top == 0);
    // return !Ptrs->top;
}

void pop(StackEntry* Ptre, Stack *Ptrs)
{
     Ptrs->top--;
    *Ptre = Ptrs->entry[Ptrs->top];
}

int pop_2 (StackEntry *Ptre, Stack *Ptrs)
{
    if (Ptrs->top == 0)
        return 0;

    else{
        *Ptre = Ptrs->entry[--Ptrs->top];
        return 1;
    }
}

void clearstack(Stack *Ptrs)
{
    Ptrs->top = 0;
}

void stacktop (StackEntry *Ptre, Stack *Ptrs)
{
    *Ptre = Ptrs->entry[Ptrs->top-1];
}

void TraverseStack (Stack* Ptrs, void (*Ptrf) (StackEntry))
{
    for (int i = Ptrs->top; i > 0; ++i)
        (*Ptrf) (Ptrs->entry[i-1]);
}

