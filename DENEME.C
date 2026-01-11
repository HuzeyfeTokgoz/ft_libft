#include <stdio.h>
#include <string.h>

// SENIN MANTIĞIN (Sadece j < len)
char    *ft_strnstr_wrong(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (*little == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        // HATA BURADA: i + j kontrolü eksik
        while (big[i + j] == little[j] && j < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

// DOĞRU MANTIK ( (i + j) < len )
char    *ft_strnstr_right(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    if (*little == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while ( (i + j) < len && big[i + j] == little[j])
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

int main()
{
    char big[] = "ABCDEFG";
    char little[] = "CDE";
    size_t len = 4;

    printf("Metin: %s | Aranan: %s | Sinir: %zu\n", big, little, len);
    printf("-------------------------------------------\n");
    
    char *res1 = ft_strnstr_wrong(big, little, len);
    printf("Senin mantigin (j < len) sonucu:    %s\n", res1 ? res1 : "NULL (Bulunamadi)");

    char *res2 = ft_strnstr_right(big, little, len);
    printf("Dogru mantik ((i+j) < len) sonucu:  %s\n", res2 ? res2 : "NULL (Bulunamadi)");

    return 0;
}