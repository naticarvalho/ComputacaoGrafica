#include "vector.h"
#include "matrix.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Testing vector and matrix classes") {
    vec2 v2(1.0, 2.0);
    CHECK(v2.x == 1.0);
    CHECK(v2.y == 2.0);

    mat3 m3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            CHECK(m3.elements[i][j] == 0.0);
}
