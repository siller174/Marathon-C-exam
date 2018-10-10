#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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
	t_list *test_list6;
	t_list *test_list7;
	test_list6 = (t_list *) malloc(sizeof(t_list));
	test_list7 = (t_list *) malloc(sizeof(t_list));
	test_list6->data = "test1";
	test_list7->data = "test2";
	test_list6->next = test_list7;
	free(test_list6);
	free(test_list7);
	printf("%d", ft_list_size(test_list6));
}	