// cplusplus link https://cplusplus.com/reference/clocale\localeconv
/* localeconv example */
#include <locale.h> /* setlocale, LC_MONETARY, struct lconv, localeconv */
#include <stdio.h> /* printf */

int main()
{
    setlocale(LC_MONETARY, "");
    struct lconv* lc;
    lc = localeconv();
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);
    return 0;
}
