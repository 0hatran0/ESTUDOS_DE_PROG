# Estruturas Condicionais

## O que são estruturas condicionais?

Estruturas condicionais permitem que um programa tome decisões
com base em expressões lógicas que resultam em verdadeiro ou falso.
Elas controlam o fluxo de execução do código.

---

## Principais tipos de condicionais

- if
- if / else
- if / else if / else
- switch / case

---

## if simples

### Java

```java
if (idade >= 18) {
    System.out.println("Maior de idade");
}
```

### C

```c
if (idade >= 18) {
    printf("Maior de idade");
}
```

### Python

```py
if idade >= 18:
    print("Maior de idade")
```

---

### if / else if / else

### Java

```java
if (nota >= 8) {
    System.out.println("Ótimo");
} else if (nota >= 6) {
    System.out.println("Bom");
} else {
    System.out.println("Insuficiente");
}
```

### C

```c
if (nota >= 8) {
    printf("Ótimo");
} else if (nota >= 6) {
    printf("Bom");
} else {
    printf("Insuficiente");
}
```

### Python

```py
if nota >= 8:
    print("Ótimo")
elif nota >= 6:
    print("Bom")
else:
    print("Insuficiente")
```

---

### switch / case

### Java

```java
switch (opcao) {
    case 1:
        System.out.println("Cadastrar");
        break;
    case 2:
        System.out.println("Listar");
        break;
    default:
        System.out.println("Opção inválida");
}
```

### C

```c
switch (opcao) {
    case 1:
        printf("Cadastrar");
        break;
    case 2:
        printf("Listar");
        break;
    default:
        printf("Opção inválida");
}
```

### Python (match/case – Python 3.10+)

```py
match opcao:
    case 1:
        print("Cadastrar")
    case 2:
        print("Listar")
    case _:
        print("Opção inválida")
```

---

### Observações importantes

- Java e C utilizam chaves {} para definir blocos.

- Python utiliza indentação obrigatória.

- Em Java, switch aceita String; em C, apenas tipos inteiros.

- Python permite expressões condicionais mais enxutas.

### Relação com estruturas de dados

#### Estruturas condicionais são fundamentais para:

- validação de dados

- controle de inserção e remoção em listas

- navegação em árvores e grafos

### Conclusão

Apesar das diferenças sintáticas, a lógica condicional é a mesma
em todas as linguagens. Dominar o raciocínio lógico torna a troca
de linguagem um processo natural.
