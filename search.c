#include "push_swap.h"
t_stack *ft_find_max(t_stack **ab)
{
	t_stack *tmp;
	t_stack *max;

	tmp = *ab;
	while (tmp != NULL)
	{
		if (tmp->data > max->data)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

t_stack *ft_find_min(t_stack **ab)
{
	t_stack *tmp;
	t_stack *min;


	tmp = *ab;
	min = tmp;
	while (tmp != NULL)
	{
		if (tmp->data < min->data)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}