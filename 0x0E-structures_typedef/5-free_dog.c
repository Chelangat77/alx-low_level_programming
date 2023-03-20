#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: structural dog variable
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
