#ifndef list_h
#define list_h

#include <stdlib.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;


void mx_clear_list(t_list **list);
#endif