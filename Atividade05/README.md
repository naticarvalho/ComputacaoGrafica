# Projeto de Ray Tracing

## Visão Geral

Este projeto implementa um Ray Tracer simples seguindo os conceitos apresentados em "Ray Tracing in One Weekend" por Peter Shirley. O principal objetivo é criar uma cena com materiais difusos e visualizá-la a partir de diferentes perspectivas.

## Dependências

- Compilador C++
- [Biblioteca STB Image Write](https://github.com/nothings/stb) (stb_image_write.h)

## Estrutura do Projeto

- `camera.h`: Define a classe da câmera.
- `color.h`: Implementação da classe de cor.
- `hittable_list.h`: Contêiner para objetos hittable.
- `hittable.h`: Classe base para objetos hittable.
- `image.h` e `image.cpp`: Manipula a criação e escrita de imagens.
- `interval.h`: Implementação da classe de intervalo.
- `main.cpp`: Arquivo principal contendo a configuração da cena e renderização.
- `material.h`: Define a classe de material lambertiano.
- `ray.h`: Implementação da classe de raio.
- `rtweekend.h`: Funções e constantes auxiliares.
- `sphere.h`: Implementação da classe de esfera.
- `stb_image_write.h`: Biblioteca STB Image Write para saída de imagens.
- `vec3.h`: Implementação da classe vec3.

## Como Executar

1. Compile o projeto usando um compilador C++. Certifique-se de incluir a Biblioteca STB Image Write.

    ```bash
    g++ -g -o main.exe main.cpp Image.cpp
    ```

2. Execute o executável compilado.

    ```bash
    ./raytracer
    ```
## Descrição da Cena

A cena consiste em três esferas com diferentes materiais lambertianos.

1. Esfera 1: Posição (-2, 0, -5), Raio 1.0, Material (1.0, 0.5, 0.5)
2. Esfera 2: Posição (0.0, 0.0, -5), Raio 1.5, Material (0.5, 0.5, 1.0)
3. Esfera 3: Posição (2, 0.0, -5), Raio 1.0, Material (0.7, 0.2, 1.0)

## Renderização

A cena é renderizada a partir de duas perspectivas de câmera diferentes:

1. Perspectiva 1:
   - Posição: (-2, 2, 1)
   - Olhar para: (0, 0, -1)

2. Perspectiva 2:
   - Posição: (0, 2, 2)
   - Olhar para: (0, 0, -1)

## Resultados

As imagens renderizadas são salvas como "output1.png" e "output2.png."
