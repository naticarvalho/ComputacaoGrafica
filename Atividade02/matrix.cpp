#include "matrix.h"

mat2::mat2() {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            elements[i][j] = 0.0f;
}

mat3::mat3() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            elements[i][j] = 0.0f;
}

mat4::mat4() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            elements[i][j] = 0.0f;
}