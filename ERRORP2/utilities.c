#include "monty.h"

/**
 * free_stack - frees a stack_t stack
 * @stack: stack to be free
 * Return: void
 */
void free_stack(&stack)
{
    stack_t *current;
    unsigned int n;

    current = *stack;
    n = 0;

    while (current != NULL)
    {
        current = current->next;
        n++;
    }
    return (n);
}

/**
 * free_all - free line and fp
 * @stack: stack to free
 * @line: line to free from getline
 * @fp: file pointer to free
 * Return: void
 */
void free_all(stack_t *stack, char *line, FILE *fp)
{
    if (stack != NULL)
        free_stack(&stack);

    free(line);
    fclose(fp);
}
