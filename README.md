A Libft é uma biblioteca em C desenvolvida como parte do currículo da 42, cujo objetivo é recriar funções padrão da libc e implementar funções utilitárias adicionais.

Ela serve como uma base para futuros projetos, permitindo trabalhar sem depender diretamente das bibliotecas padrão.


# 🔧 Funcionalidades

A biblioteca inclui:

Funções da libc recriadas:

ft_strlen, ft_strncmp, ft_memcpy, etc.


Funções adicionais úteis:

Manipulação de strings, memória e listas encadeadas.


Funções bônus:

Implementação de t_list e operações sobre listas.


# 📂 Estrutura do projeto

```
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── ...
```

libft.h → arquivo de cabeçalho com protótipos.

Makefile → compila a biblioteca.

ft_*.c → implementações das funções.


# ⚙️ Compilação

Para compilar a biblioteca:
```
make
```
Isso gera o arquivo libft.a.

Para recompilar do zero:
```
make re
```
Para limpar arquivos objeto:
```
make clean
```
Para limpar tudo (objetos + lib):
```
make fclean
```

# 🖥️ Uso

Inclua o cabeçalho e compile seu código com a libft:
```
#include "libft.h"

int main(void)
{
    char *str = "Hello Libft!";
    printf("len = %zu\n", ft_strlen(str));
    return 0;
}
```
Compile com:
```
gcc main.c -L. -lft
```

# ✅ Testes

Você pode testar sua lib usando:

libft-unit-test

Libft Tester


Exemplo:
```
git clone https://github.com/alelievr/libft-unit-test
cd libft-unit-test
make
```
