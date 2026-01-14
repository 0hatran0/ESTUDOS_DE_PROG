# Estruturas de Repetição

## O que são estruturas de repetição?

Estruturas de repetição permitem executar um bloco de código
múltiplas vezes enquanto uma condição for satisfeita ou
durante um número conhecido de iterações.

---

## Principais tipos

- for
- while
- do while

---

## Laço for (contador)

### Java

```java
for (int i = 0; i < 5; i++) {
    System.out.println(i);
}
```

### C

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### Python

```py
for i in range(5):
    print(i)
```

## Laço while (condicional)

### Java

```java
int i = 0;
while (i < 5) {
System.out.println(i);
i++;
}
```

### C

```c
int i = 0;
while (i < 5) {
printf("%d\n", i);
i++;
}
```

### Python

```py
i = 0
while i < 5:
print(i)
i += 1
```

## Laço do while

### Java

```java
int i = 0;
do {
System.out.println(i);
i++;
} while (i < 5);
```

### C

```c
int i = 0;
do {
printf("%d\n", i);
i++;
} while (i < 5);
```

### Python

Python não possui do while.
O comportamento é simulado com while True e break.

```py
i = 0
while True:
print(i)
i += 1
if i >= 5:
break
```

---

### Quando usar cada laço

- for: número de iterações conhecido

- while: condição depende de lógica

- do while: execução obrigatória ao menos uma vez

### Relação com estruturas de dados

#### Laços são essenciais para:

- percorrer arrays e listas

- navegar em listas encadeadas

- realizar buscas e ordenações

- percorrer árvores e grafos

### Conclusão

Laços de repetição são a base para manipulação de estruturas de dados.
O entendimento do controle de fluxo é mais importante que a sintaxe.
