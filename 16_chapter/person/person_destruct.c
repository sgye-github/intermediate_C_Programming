#include <stdlib.h>
#include "person.h"

void Person_destruct(Person * p)
{
	free(p -> name);

	free(p);
}







