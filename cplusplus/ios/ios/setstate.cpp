// cplusplus link https://cplusplus.com/reference/ios\ios\setstate
void ios::setstate(iostate state)
{
    clear(rdstate() | state);
}
