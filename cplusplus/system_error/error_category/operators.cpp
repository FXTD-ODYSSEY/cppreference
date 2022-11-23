// cplusplus link https://cplusplus.com/reference/system_error\error_category\operators
bool error_category::operator<(const error_category& rhs) const noexcept
{
    return less<const error_category*>()(this, &rhs);
}
