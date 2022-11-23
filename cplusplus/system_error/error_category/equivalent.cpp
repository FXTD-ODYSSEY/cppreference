// cplusplus link https://cplusplus.com/reference/system_error\error_category\equivalent
virtual bool equivalent(int valcode, const error_condition& cond) const noexcept
{
    return default_error_condition(valcode) == cond;
}
virtual bool equivalent(const error_code& code, int valcond) const noexcept
{
    return *this == code.category && code.value() == valcond;
}
