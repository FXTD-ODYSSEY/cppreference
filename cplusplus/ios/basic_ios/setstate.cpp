// cplusplus link https://cplusplus.com/reference/ios\basic_ios\setstate
void basic_ios::setstate(iostate state)
{
    clear(rdstate() | state);
}
