#include "header.h"

// Stack Operations
stack_t createStack(unsigned capacity)
{
    stack_t *stack = (stack_t)
           malloc(sizeof(struct Stack));
 
    if (!stack)
        return NULL;
 
    stack->top = -1;
    stack->capacity = capacity;
 
    stack->array = (int*) malloc(stack->capacity *sizeof(int));
 
    return stack;
}