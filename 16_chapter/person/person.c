#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "person.h"

Person * Person_construct(int y, int m, int d, char * n)
{
	Person * P = NULL;
	P = malloc(sizeof(Person));
	if(P == NULL)
	{
		return NULL;
	}

	P -> year = y;
	P -> month = m;
	P -> date = d;
	P -> name = malloc(sizeof(char) * (strlen(n) + 1));
	if((P -> name) == NULL) 
	{
		free (P);
		return NULL;
	}
	strcpy(P -> name, n);

	return P;
}













