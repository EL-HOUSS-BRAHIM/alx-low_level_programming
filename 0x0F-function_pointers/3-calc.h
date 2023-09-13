#ifndef _3_CALC_H_
#define _3_CALC_H_
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
#endif
