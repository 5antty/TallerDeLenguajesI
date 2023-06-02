#ifndef istack
#define istack
#include <stdlib.h>
struct s
{
    int dato;
    struct s *sig;
};
typedef struct s nodo;
typedef nodo *stack;

stack s_create();
int s_push(stack *s, int n);
int s_pop(stack *s);
int s_top(stack s);
int s_empty(stack s);
int s_length(stack s);

#endif
