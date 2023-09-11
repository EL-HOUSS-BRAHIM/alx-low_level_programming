#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dor - Print the elements of a struct dog.
 * @d: Pointer to struct dog.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
