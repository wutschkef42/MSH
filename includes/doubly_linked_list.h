
#ifndef H_DOUBLY_LINKED_LIST
# define H_DOUBLY_LINKED_LIST


typedef struct			s_dll_node
{
	char				*data;
	struct s_dll_node	*next;
	struct s_dll_node	*prev;
	
}						t_dll_node;


void		dll_insert_head(t_dll_node **head, t_dll_node *new);
void		dll_insert_tail(t_dll_node **head, t_dll_node *new);
t_dll_node	*dll_new_node(char *data);
void		dll_print_forward(t_dll_node *head);
void		dll_print_backward(t_dll_node *head);

#endif