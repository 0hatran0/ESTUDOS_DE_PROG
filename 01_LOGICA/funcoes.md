# Funções e Métodos

## O que são funções?

Funções (ou métodos) são blocos de código reutilizáveis
que executam uma tarefa específica, podendo receber parâmetros
e retornar valores.

---

## Estrutura básica de uma função

### Java

```java
public static int soma(int a, int b) {
    return a + b;
}
```

### C

```c
int soma(int a, int b) {
return a + b;
}
```

### Python

```py
def soma(a, b):
return a + b
```

#### Funções sem retorno

### Java

```java
public static void mensagem() {
System.out.println("Olá!");
}
```

### C

```c
void mensagem() {
printf("Olá!");
}
```

### Python

```py
def mensagem():
print("Olá!")
```

---

### Passagem de parâmetros

- Java: passagem por valor (objetos por referência)

- C: passagem por valor e por ponteiros

- Python: passagem por referência a objetos

---

### Funções e modularização

#### Funções permitem:

- reutilização de código

- melhor legibilidade

- manutenção facilitada

- divisão lógica do problema

---

### Relação com estruturas de dados

#### Funções são usadas para:

- inserir, remover e buscar elementos

- encapsular operações sobre listas e árvores

- organizar algoritmos complexos

---

### Observações importantes

- Em Java, todas as funções pertencem a uma classe.

- Em C, funções são independentes.

- Em Python, funções são objetos de primeira classe.

---

### Conclusão

Funções são fundamentais para estruturar algoritmos.
Dominar sua utilização é essencial para trabalhar com
estruturas de dados e sistemas maiores.
