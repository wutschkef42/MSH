
#ifndef H_HASHMAP
# define H_HASHMAP

# include <stdlib.h>
# include <limits.h>
# include "libft.h"

typedef struct		s_entry
{
	char			*key;
	char			*value;
	struct s_entry	*next;

}					t_entry;

typedef struct		s_hashmap
{
	int				size_table;
	t_entry			**table;

}					t_hashmap;

t_hashmap	*hm_new_map(int size);
int			hm_hash(t_hashmap *hashmap, char *key);
t_entry		*hm_new_entry(char *key, char *value);
void		hm_insert(t_hashmap *hashmap, char *key, char *value);
char		*hm_lookup(t_hashmap *hashmap, char *key);

#endif