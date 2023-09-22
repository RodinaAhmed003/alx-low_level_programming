#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
    size_t aded = 0;

    while (h != NULL)
    {
        aded++;
        h = h->next;
    }

    return (aded);
}
