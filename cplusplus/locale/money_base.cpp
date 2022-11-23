// cplusplus link https://cplusplus.com/reference/locale\money_base
class money_base {
public:
    enum part { none,
        space,
        symbol,
        sign,
        value };
    struct pattern {
        char field[4];
    };
};
