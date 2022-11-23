// cplusplus link https://cplusplus.com/reference/iterator\move_iterator\operator--
move_iterator operator--(int)
{
    move_iterator temp = *this;
    --(*this);
    return temp;
}
