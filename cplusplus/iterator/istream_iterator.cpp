// cplusplus link https://cplusplus.com/reference/iterator\istream_iterator
template <class T, class charT = char, class traits = char_traits<charT>, class Distance = ptrdiff_t>
class istream_iterator : public iterator<input_iterator_tag, T, Distance, const T*, const T&> {
    basic_istream<charT, traits>* in_stream;
    T value;

public:
    typedef charT char_type;
    typedef traits traits_type;
    typedef basic_istream<charT, traits> istream_type;
    istream_iterator()
        : in_stream(0)
    {
    }
    istream_iterator(istream_type& s)
        : in_stream(&s)
    {
        ++*this;
    }
    istream_iterator(const istream_iterator<T, charT, traits, Distance>& x)
        : in_stream(x.in_stream)
        , value(x.value)
    {
    }
    ~istream_iterator() { }

    const T& operator*() const { return value; }
    const T* operator->() const { return &value; }
    istream_iterator<T, charT, traits, Distance>& operator++()
    {
        if (in_stream && !(*in_stream >> value))
            in_stream = 0;
        return *this;
    }
    istream_iterator<T, charT, traits, Distance> operator++(int)
    {
        istream_iterator<T, charT, traits, Distance> tmp = *this;
        ++*this;
        return tmp;
    }
};
