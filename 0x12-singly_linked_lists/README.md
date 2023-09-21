_ Singly linked lists

Tests
* Tests: This Directory is for tests purposes.

Header File 
* lists.h: Header file containing definitions and prototypes for all types and functions written for the project.
Type/File	Definition/Prototype
* struct list	. char *str
* unsigned int len
* struct list_s *next
typedef listt	struct list _s
0-printlist.c	size_t print _list(const list _t *h);
1-list_len.c	size_t list _len(const list _t *h);
2-addnode.c	list_ t *add_node(list _t **head, const char *str);
3-addnodeend.c	list_ t *add_node_end(list_t **head, const char *str);
4-fre_ list.c	void free_list(list _t *head)

Tasks
* 0. Print list
    * 0-print_list.c: C function that prints all the elements of a list _t list.
        * If str is NULL, the function prints [0] (nil).
* 1. List length
    * 1-list _len.c: C function that returns the number of elements in a linked list _t list.
* 2. Add node
    * 2-add_node.c: C function that adds a new node at the beginning a of a list _t list.
        * If the function fails - returns NULL.
        * Otherwise - returns the address of the new element.
* 3. Add node at the end
    * 3-add_node _end.c: C function that adds a new node at the end of a linked list _t list.
        * If the function fails - returns NULL.
        * Otherwise - returns the address of the new element.
* 4. Free list
    * 4-free _list.c: C function that frees a list_t list.
* 5. The Hare and the Tortoise
    * 100-first.c: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
* 6. Real programmers can write assembly code in any language
    * 101-hello _holberton.asm: 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts

