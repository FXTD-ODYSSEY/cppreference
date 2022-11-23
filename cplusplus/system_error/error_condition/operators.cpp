// cplusplus link https://cplusplus.com/reference/system_error\error_condition\operators
bool operator==(const error_condition& lhs, const error_condition& rhs) noexcept
{
    return lhs.category() == rhs.category() && lhs.value() == rhs.value();
}
bool operator!=(const error_condition& lhs, const error_condition& rhs) noexcept
{
    return !(lhs == rhs);
}
bool operator<(const error_condition& lhs, const error_condition& rhs) noexcept
{
    return lhs.category() < rhs.category() || lhs.category() == rhs.category() && lhs.value() < rhs.value();
}

bool operator==(const error_condition& lhs, const error_code& rhs) noexcept
{
    return lhs.category().equivalent(lhs.value, rhs) || rhs.category().equivalent(lhs, rhs.value());
}
bool operator==(const error_code& lhs, const error_condition& rhs) noexcept
{
    return lhs.category().equivalent(lhs.value, rhs) || rhs.category().equivalent(lhs, rhs.value());
}
bool operator!=(const error_condition& lhs, const error_code& rhs) noexcept { return !(lhs == rhs); }
bool operator!=(const error_code& lhs, const error_condition& rhs) noexcept { return !(lhs == rhs); }
