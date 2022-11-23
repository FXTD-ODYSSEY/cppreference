// cplusplus link https://cplusplus.com/reference/locale\locale\facet
class locale::facet {
protected:
    explicit facet(size_t refs = 0);
    virtual ~facet();
    facet(const facet&) = delete;
    void operator=(const facet&) = delete;
}
