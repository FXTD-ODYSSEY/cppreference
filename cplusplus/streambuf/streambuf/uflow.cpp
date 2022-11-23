// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\uflow
int uflow()
{
    if (underflow() == EOF)
        return EOF;
    gbump(1);
    return gptr()[-1];
}
