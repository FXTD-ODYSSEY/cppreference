// cplusplus link https://cplusplus.com/reference/regex\regex_traits\translate_nocase
char_type translate_nocase(char_type c) const
{
    return use_facet<ctype<char_type>>(getloc()).tolower(c);
}
