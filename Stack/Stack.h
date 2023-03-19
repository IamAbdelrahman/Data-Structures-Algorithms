/* Header file of stack */
// Implementation using array and a data type

typedef int StackEntry;

typedef struct stack{

    StackEntry top;
    StackEntry entry [MAXSTACK];

}Stack;

// Prototypes of Stack Operations:-

void createStack (Stack*);
void Push (StackEntry, Stack*);
int Push_2 (StackEntry , Stack *);
int StackFull (Stack*);
int StackEmpy (Stack*);
void pop (StackEntry*, Stack*);
int pop_2 (StackEntry*, Stack*);
void stacktop (StackEntry*, Stack*);
void clearstack (Stack*);
void TraverseStack (Stack*, void (*) (StackEntry));



