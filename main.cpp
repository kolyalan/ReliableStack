#include <iostream>
#include "StackLib.hpp"
#include "logs.hpp"

#include "templates.hpp"
#ifdef T
#undef T
#endif

#define T double
#include "Stack.hpp"
#ifdef T
#undef T
#endif

#define T float
#include "Stack.hpp"
#ifdef T
#undef T
#endif

#define T int
#include "Stack.hpp"
#ifdef T
#undef T
#endif


int main() {
    log_init();

    stack_double sd;
    stack_init(&sd, 5);
    stack_dump(&sd);

    stack_push(&sd, 1.222);
    stack_push(&sd, 2.222);
    stack_push(&sd, 3.222);
    stack_push(&sd, 4.222);
    stack_push(&sd, 7.222);
    stack_push(&sd, 9.222);
    stack_push(&sd, 11.222);
    stack_push(&sd, 12.222);
    stack_push(&sd, 13.222);
    stack_push(&sd, 14.222);
    stack_push(&sd, 15.222);
    stack_push(&sd, 16.222);
    stack_push(&sd, 17.222);
    stack_push(&sd, 18.222);

    stack_dump(&sd);
    
    double d = stack_pop(&sd);
    printf("%lf\n", d);
    stack_push(&sd, 461625585128.213123);
    printf("%lf\n", stack_pop(&sd));

    stack_dump(&sd);

    stack_float st_f;
    stack_init(&st_f, 0);
    stack_push(&st_f, 0.0001);
    stack_pop(&st_f);

    stack_dump(&st_f);

    stack_int si;
    stack_init(&si, 5);
    stack_dump(&si);

    std::cout << sizeof(sd) << std::endl;

    stack_destruct(&sd);
    stack_destruct(&st_f);
    stack_destruct(&si);
    log_close();
    return 0;
}
