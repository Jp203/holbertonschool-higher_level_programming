#include "lists.h"
#include <studio.h>

/**
  * check_cycle - Checks if a singly linked list has a loop in it.
  * @list: the list to check.
  * Return : 0 if no cycle, 1 if so.
  **/
int check_cycle(listint_t *list)
{
	    listint_t *check, *place;

        check = list;
        place = list;

        if (list == NULL)
                return (0);
        if (list->next == NULL)
                return (0);
        if ((list->next)-> == NULL)
                return (0);

        while (check && place)
        {
                if (place->next)
                        check = check->next;
                        place = place->next->next;
                        if (check == place)
                                return (1);
        }
        return (0);
}	
