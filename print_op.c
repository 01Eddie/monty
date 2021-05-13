#include "header.h"

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    if (stack == NULL || *stack == NULL)
        return;
    
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}