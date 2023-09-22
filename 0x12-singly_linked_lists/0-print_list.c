#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
    size_t ct = 0;

    while (h != NULL)
    {
        ct++;
        h = h->next;
    }

    return (ct);
}

