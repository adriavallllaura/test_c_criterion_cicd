#include <criterion/criterion.h>    

typedef struct {
    int x;
    int y;
} Point;    

Test(hello, world) {
    Point p = { .x = 1, .y = 2};
    cr_assert(p.x == 1);
    cr_assert(p.y == 2);
}

Test(hello, world2) {
    cr_assert(1 == 1);
}