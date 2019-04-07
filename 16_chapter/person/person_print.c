#include <stdio.h>
#include "person.h"

void Person_print(Person * p)
{
	printf("Name: %s. ", p -> name);
	printf("Date of Birth: %d/%d/%d\n", p -> year, p -> month, p -> date);
}








