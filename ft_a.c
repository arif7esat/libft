#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// İşlev: Bir integer'ı iki katına çıkar
void *custom_double(void *content)
{
    int *num = (int *)content;
    int *doubled = malloc(sizeof(int));
    
    if (!doubled)
    {
        perror("Bellek tahsis hatası");
        exit(1);
    }

    *doubled = (*num) * 2;
    
    return (void *)doubled;
}

// İşlev: Belleği temizle
void my_del(void *content)
{
    free(content);
}

int main(void)
{
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;

    t_list *old_list1 = ft_lstnew(ft_lstnew(&num1));
    t_list *old_list2 = ft_lstnew(ft_lstnew(&num2));
    t_list *old_list3 = ft_lstnew(ft_lstnew(&num3));

    old_list1->next = old_list2;
    old_list2->next = old_list3;

    

    t_list *new_list = ft_lstmap(old_list1, &custom_double, my_del);

    // Yeni liste üzerinde gezinme ve yazdırma
    while (new_list)
    {
        int *doubled_num = (int *)new_list->content;
        printf("%d\n", *doubled_num);
        new_list = new_list->next;
    }

    // Belleği temizle
    ft_lstclear(&old_list1, my_del);

    return 0;
}
