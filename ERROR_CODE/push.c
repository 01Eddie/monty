#include "header.h"
static int valid_digit(char *arg);
/* algoritmo pilas_con_punteros:
tipo puntero_a: punt
registro: tipo_elemnto
fin de registro
registro: nodo
ti_elemento: elemento
punt: cima
fin_regitro
var:
punt: cima
elemento: tipo_elemento

inicio
inicializar(cima)
fin

procedimiento inicializar(s punt: cima)
inicio
cima->nulo
fin_procedimiento

logico funcion vacia(s punt: cima)
inicio
devolver (cima = nulo)
fin_funcion

procedimiento consultarCima(E punt: cima, S tipo_elemento: elemento)
inicio
si no_vacia(cima) entonces
elemento <- cima -> elemento
fin_si
fin_procedimiento

procedimiento meter(E/S punt: cima; E tipo_elemento: elemento)
var 
punt: auxi
inicio
reservar(auxi)
auxi -> elemento <-elemento
auxi -> cima <- cima
cima <- auxi
fin_procedimiento */

/* int isFull(stack_t **stack)
{
    return stack->top == stack->capacity - 1;
}
int isEmpty(stack_t **stack)
{
    return stack->top == -1;
} */



/**
 * push - push an integer into the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 * Return: void
 */

void push1(stack_t **stack, unsigned int line_number)
{
    int n;
    char *arg;

    arg = strtok(NULL, "\n\t\r ");
    if (arg == NULL || check_for_digit(arg))
    {
        printf("L%u: usage: push integer", line_number);
        exit(EXIT_FAILURE);
    }
    n = atoi(arg);
    //Here verified about of add node evaluatting the memory with malloc
    if (!add_node(stack, n))
    {
        printf("ERROR: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    //Save the variable
    var.stack_len++;
}
/**
 * check_for_digit - checks that a string only contains digits
 * @arg: string to check
 * Return: 0 if only digits, else 1
 */

static int valid_digit(char *arg)
{
    int i;

    for (i = 0; arg[i]; i++)
    {
        if (arg[i] == '-' && i == 0)
            continue;
        if (isdigit(arg[i]) == 0)
            return (1);
    }
    return (0);
}
//*stack->array[++stack->top] = element;
    //RECORRIDO SI ES NUMERO ENTERO y tmb diferente de nulo, aca hacemos la validacion 
   /*  for (i = 0; n[i] != '\0'; i++)
    {
        if (isdigit(n[i] == 0))
        {
            printf("L%u: usage: push integer", line_number);
            exit(EXIT_FAILURE);
        }
    }
    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        printf("L%u: usage: push integer", line_number);
        exit(EXIT_FAILURE);        
    }
    new->n = atoi(n)
    new->prev = NULL;
    new->next = NULL;
    if (*stack != NULL)
    {
        new->next = *stack;
        (*stack)->prev = new;
    }
    *stack = new; */