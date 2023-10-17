# Projeto de Manipulação de Imagens

Este projeto inclui uma classe simples para criar e manipular imagens em C++. As imagens geradas são salvas em formato PNG.

## Dependências

- Biblioteca stb_image_write

## Uso

Para gerar uma imagem, crie uma instância da classe `Image`, use `setPixel` para definir a cor de cada pixel e então use `writeImage` para salvar a imagem em um arquivo PNG.

```cpp
Image img(256, 256);
img.setPixel(0, 0, 255, 0, 0); // Define o pixel no canto superior esquerdo para vermelho
img.writeImage("output.png");