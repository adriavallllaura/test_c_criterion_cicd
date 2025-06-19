#include <stdio.h>
#include "../include/point.h"       

int main() {
    Point p = new_point(1, 2);
    printf("Point: (%d, %d)\n", p.x, p.y);
    return 0;
}