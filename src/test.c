#include <criterion/criterion.h>
#include "../include/point.h"

Test(point, initialization) {
    Point p = { .x = 1, .y = 2 };
    cr_assert_eq(p.x, 1, "Expected p.x to be 1");
    cr_assert_eq(p.y, 2, "Expected p.y to be 2");
}

Test(point, new_point_function) {
    Point p = new_point(3, 4);
    cr_assert_eq(p.x, 3, "Expected x coordinate to be 3");
    cr_assert_eq(p.y, 4, "Expected y coordinate to be 4");
}

/*
Test(point, failing_test_example) {
    cr_assert_fail("Esta prueba falla intencionalmente");
}
*/