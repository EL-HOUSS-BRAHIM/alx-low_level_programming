#include <stdio.h>
#include "dog.h"

/**
 * print_dor - Print the elements of a struct dog.
 * @d: Pointer to struct dog.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name !=NULL ? d->name : "(null)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(null)");
}
}
