#include "libft.h"
#include <stdio.h>

void	*f(void *c)
{
	int i = 0;
	char *new_str = ft_strdup((char *)c);
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return (new_str);
}

void del(void *d)
{
	free(d);
}

int main()
{
	char *s = ft_strdup("hello");
	char *s1 = ft_strdup("world");
	t_list *lst;
	t_list *lst1;
	lst= ft_lstnew(s);
	lst1=ft_lstnew(s1);
	lst->next = lst1;
	t_list *a = ft_lstmap(lst, f, del);
	printf("%s%s", (char *)a->content, (char *)a->next->content);
}