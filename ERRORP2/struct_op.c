#include "monty.h"
/**
 * opcode_struct - checks for opcode's associated function and executes it
 * @opcode: opcode from user input
 * @stack: pointer to stack
 * @line_number: line number of opcode from user input
 * Return: 0 on success, 1 on failure
 */
int struct_op(char *opcode, stack_t **stack, unsigned int line_number)
{
    int i;
    instruction_t opcod[] = {
        {"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"swap", m_swap},
		{"add", m_add},
		{"nop", m_nop},
		{"sub", m_sub},
		{"mul", m_mul},
		{"div", m_div},
		{"mod", m_mod},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", m_stack},
		{"queue", m_queue},
		{"pchar", m_pchar},
		{"pstr", m_pstr},
        {NULL, NULL}
    };
    
    for (i = 0; opcod[i].opcode != NULL; i++)
    {
        if (strcmp(opcode, opcod[i].opcode) == 0)
        {
            (opcod[i].f)(stack, line_number);
            return (EXIT_SUCCESS);
        }
    }
    printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}