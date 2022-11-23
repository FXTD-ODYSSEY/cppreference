// cplusplus link https://cplusplus.com/reference/ios\ios_base\failure
class ios_base::failure : public system_error {
public:
    explicit failure(const string& msg, const error_code& ec = io_errc::stream);
    explicit failure(const char* msg, const error_code& ec = io_errc::stream);
}
