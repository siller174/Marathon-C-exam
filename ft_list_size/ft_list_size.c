#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *list = begin_list;
	if(!list)
		return (0);
	while(list->next)
	{
		i++;
		list = list->next;
	}
	return (i);
}

int	main()
{
	t_list *test_list1;
	t_list *test_list2;
	t_list->next = test_list2;
	printf("%d", ft_list_size(test_list1));
}	