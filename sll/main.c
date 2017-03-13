#include <stdio.h>

#include "sll.h"

int main(int argc, char *argv[])
{
	int i;
	struct node *sl = NULL;

	for (i = 0; i < 10; i++)
		sll_append(&sl, i * 10);
	sll_print(sl);
	sll_delete(&sl);
	sll_print(sl);
	return 0;
}