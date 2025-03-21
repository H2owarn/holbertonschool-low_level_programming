#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array : the array
 * @size : the size of the array
 * @action : pointer to the function
 *
 * Description : this function iterates through the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i = i + 1)
	{
		action(array[i]);
	}
}
