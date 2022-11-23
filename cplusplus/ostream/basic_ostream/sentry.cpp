// cplusplus link https://cplusplus.com/reference/ostream\basic_ostream\sentry
class sentry {
public:
    explicit sentry(basic_ostream& os);
    ~sentry();
    explicit operator bool() const;
    sentry(const sentry&) = delete;
    sentry& operator=(const sentry&) = delete;
};
