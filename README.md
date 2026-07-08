# Estudo de Variáveis Constantes e Arrays em C (Windows API)

Este é um projeto didático desenvolvido para demonstrar conceitos fundamentais de imutabilidade de dados, manipulação básica de endereços de memória RAM e integração com recursos nativos do sistema operacional Windows.

## 👨‍💻 Autor
- **Criador:** Pedro Levi
- **Idade:** 14 anos
- **Nível atual em C:** Iniciante Avançado

---

## 🚀 Conceitos Abordados no Código

- **Imutabilidade com `const`:** Demonstração prática de como arrays protegidos com o modificador `const` impedem a alteração de seus valores após a inicialização.
- **Tipos Primitivos:** Manipulação de estruturas de dados do tipo `char`, `int`, `float` e `bool` (via biblioteca `<stdbool.h>`).
- **Endereçamento de Memória:** Exibição dos endereços físicos (ponteiros `%p`) de cada estrutura na memória RAM, utilizando o *casting* correto para `(void*)`.
- **Windows API:** Uso prático de funções nativas do sistema operacional:
  - `Beep()` para emitir sinais sonoros.
  - `MessageBoxW()` combinando flags de interface com o operador bitwise `|` (`MB_OK | MB_ICONINFORMATION`).
  - `SetConsoleOutputCP(65001)` para garantir o suporte correto a caracteres UTF-8 no console.

---

## 🛠️ Pré-requisitos e Compilação

Como o código faz uso da biblioteca `<windows.h>`, ele foi projetado especificamente para ser compilador e executado em ambientes **Windows**.

### Como compilar via Terminal (GCC/MinGW):
```bash
gcc main.c -o programa.exe
```

---

## 📝 Aprendizados Futuros
Este repositório serve como base sólida nos fundamentos da linguagem. Os próximos passos de estudo planejados incluem:
- [ ] Ponteiros e Aritmética de Ponteiros
- [ ] Alocação Dinâmica de Memória (`malloc`, `free`)
- [ ] Estruturas de Dados Customizadas (`structs`)
