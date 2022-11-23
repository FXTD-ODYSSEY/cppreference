// cplusplus link https://cplusplus.com/reference/cstdlib\bsearch
/* bsearch example with strings */
#include <stdio.h> /* printf */
#include <stdlib.h> /* qsort, bsearch, NULL */
#include <string.h> /* strcmp */

char strvalues[][20] = { "some", "example", "strings", "here" };

int main()
{
    char* pItem;
    char key[20] = "example";

    /* sort elements in array: */
    qsort(strvalues, 4, 20, (int (*)(const void*, const void*))strcmp);

    /* search for the key: */
    pItem = (char*)bsearch(key, strvalues, 4, 20, (int (*)(const void*, const void*))strcmp);

    if (pItem != NULL)
        printf("%s is in the array.\n", pItem);
    else
        printf("%s is not in the array.\n", key);
    return 0;
}
