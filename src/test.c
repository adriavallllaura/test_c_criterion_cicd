#include <criterion/criterion.h>
#include "../include/point.h"


Test(hello, world) {
    Point p = { .x = 1, .y = 2};
    cr_assert(p.x == 1);
    cr_assert(p.y == 2);
}

Test(hello, world2) {
    cr_assert(1 == 1);
}

Test(point, new_point) {
    Point p = new_point(1, 2);
    cr_assert_fail(p.x == 5);
    cr_assert(p.y == 2);
}