// cplusplus link https://cplusplus.com/reference/regex\regex_traits\transform
template <class ForwardIterator>
string_type transform(ForwardIterator first, ForwardIterator last) const
{
    string_type s(first, last);
    return use_facet<collate<char_type>>(getloc()).transform(&*s.begin(), &*s.begin() + s.length());
}
