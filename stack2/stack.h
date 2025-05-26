#ifndef LISTAWP_STACK_H
#define LISTAWP_STACK_H

/* --------- ERROR CODES ---------- */
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* ---------- INSERTING ---------- */



int insertBack(int element);
// Inserts passed argument at the back of the list
// Returns:
// EXIT_SUCCESS (0), if added successfully
// EXIT_FAILURE (1), if couldn't add (memory allocation fail)



/* ---------- DELETING ---------- */

int deleteFront();
// Deletes the first element from the list
// Returns:
// EXIT_SUCCESS (0), if deleted successfully
// EXIT_FAILURE (1), if couldn't delete (no nodes)

int deleteBack();
// Deletes the last element from the list
// Returns:
// EXIT_SUCCESS (0), if deleted successfully
// EXIT_FAILURE (1), if couldn't delete (no nodes)


/* ---------- OTHER ---------- */

void printList(void);
// Prints the list

int getNodesCount();
// Returns the current amount of elements (nodes)

void freeList(void);
// Frees memory allocated by the list

#endif //LISTAWP_STACK_H
