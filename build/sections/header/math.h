uint128_t count_digits(uint128_t no);

uint128_t EXP(uint128_t no, uint128_t i);

struct t_number safe_dec(struct t_number no, uint128_t precision);

uint128_t highest_precision(struct t_number left, struct t_number right);

enum e_logic_ops {
    GREATER_THAN = 0,
    GREATER_EQUALS = 1,
    LESS_THAN = 2,
    LESS_EQUALS = 3,
    BOTH_EQUALS = 4,
    NOT_EQUALS = 5,
    LOGIC_AND = 6,
    LOGIC_OR = 7
};

bool safe_logic(unsigned int op, struct t_number left, struct t_number right, uint128_t precision=1000);

uint128_t Min(uint128_t left, uint128_t right);

uint128_t Max(uint128_t left, uint128_t right);

struct t_number Min(struct t_number left, struct t_number right);

struct t_number Max(struct t_number left, struct t_number right);

struct t_number N(uint128_t value, uint128_t precision=1000);

struct t_number safe_mul(struct t_number left, struct t_number right);

struct t_number safe_add(struct t_number left, struct t_number right);

struct t_number safe_sub(struct t_number left, struct t_number right);

uint128_t GCD(uint128_t left, uint128_t right);

struct t_number safe_div(struct t_number left, struct t_number right);

struct t_number simplify_insignificant(struct t_number no);

struct t_number no_by_index(struct t_number no, uint128_t offset, uint128_t limit=0);

struct t_number round(struct t_number no, uint128_t precision);

struct t_number safe_math(
    struct t_number (*math_op)
        (struct t_number, struct t_number),
    struct t_number left, struct t_number right, uint128_t precision=1000);

struct t_dec {
    uint128_t whole;
    t_number dec;
};

uint128_t uint128_get_whole(struct t_number no);

uint128_t uint128_get_dec(struct t_number no);

struct t_number safe_mod(struct t_number left, struct t_number right, uint128_t precision=0);

t_number N(const char *s, uint128_t precision=0);
