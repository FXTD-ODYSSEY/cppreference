// cplusplus link https://cplusplus.com/reference/ostream\ostream\sentry
class sentry {
public:
    explicit sentry(ostream& os);
    ~sentry();
    explicit operator bool() const;
    sentry(const sentry&) = delete;
    sentry& operator=(const sentry&) = delete;
};
