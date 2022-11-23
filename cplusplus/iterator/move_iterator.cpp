// cplusplus link https://cplusplus.com/reference/iterator\move_iterator
namespace std {
template <class Iterator>
class move_iterator {
    Iterator current;

public:
    typedef Iterator iterator_type;
    typedef typename iterator_traits<Iterator>::iterator_category iterator_category;
    typedef typename iterator_traits<Iterator>::value_type value_type;
    typedef typename iterator_traits<Iterator>::difference_type difference_type;
    typedef Iterator pointer typedef value_type&& reference;

    move_iterator() { }
    explicit move_iterator(Iterator it)
        : current(it)
    {
    }
    template <class Iter>
    move_iterator(const move_iterator<Iter>& it)
        : current(it.current)
    {
    }
    template <class Iter>
    move_iterator& operator=(const move_iterator<Iter>& it)
    {
        current = it.current;
    }

    iterator_type base() const { return current; }
    pointer operator->() const { return current; }
    reference operator*() const { return std::move(*current); }
    move_iterator& operator++()
    {
        ++current;
        return *this;
    }
    move_iterator& operator--()
    {
        --current;
        return *this;
    }
    move_iterator& operator++(int)
    {
        move_iterator temp = *this;
        ++current;
        return temp;
    }
    move_iterator& operator--(int)
    {
        move_iterator temp = *this;
        --current;
        return temp;
    }
    move_iterator operator+(difference_type n) const { return move_iterator(current + n); }
    move_iterator operator-(difference_type n) const { return move_iterator(current - n); }
    move_iterator operator+=(difference_type n)
    {
        current += n;
        return *this;
    }
    move_iterator operator-=(difference_type n)
    {
        current -= n;
        return *this;
    }
    auto operator[](difference_type n) const -> decltype(std::move(current[n]))
    {
        return std::move(current[n]);
    }
};
}
