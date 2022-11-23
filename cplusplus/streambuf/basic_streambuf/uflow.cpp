// cplusplus link https://cplusplus.com/reference/streambuf\basic_streambuf\uflow
int_type uflow()
{
    if (underflow() == traits_type::eof())
        return traits_type::eof();
    gbump(1);
    return traits_type::to_int_type(gptr()[-1]);
}
