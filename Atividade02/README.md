## Estrutura da Atividade

O projeto consiste em várias classes que representam vetores e matrizes, além de testes unitários para essas classes.

### Vetores

As classes `Vec2`, `Vec3` e `Vec4` representam vetores 2D, 3D e 4D, respectivamente. Cada classe possui operações de adição, subtração, e produto escalar.

### Matrizes

As classes `Mat2`, `Mat3` e `Mat4` representam matrizes 2x2, 3x3 e 4x4, respectivamente. Cada classe possui operações de adição, subtração e multiplicação.

### Testes

Os testes unitários estão localizados no arquivo `main.cpp` e usam a biblioteca doctest. Cada operação para as classes de vetores e matrizes tem um conjunto correspondente de testes.

## Compilação e Execução

Para compilar o projeto, use o seguinte comando:

```bash
g++ -std=c++17 main.cpp vector.cpp matrix.cpp -o main