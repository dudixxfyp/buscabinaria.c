# buscabinaria.c
# 🔍 Busca Binária — Menor e Maior

Este programa em **C** implementa uma **busca binária modificada** que, além de procurar um elemento em um vetor ordenado, determina **quantos elementos são menores** e **quantos são maiores** do que o valor buscado.

---

## 📘 Descrição do projeto

O programa lê:
1. O **tamanho** do vetor.  
2. Os **elementos** do vetor (em **ordem crescente**).  
3. Um **número** a ser procurado.

Em seguida, a função `buscaMenorMaiorBin()` realiza uma **busca binária** e retorna:
- `menor`: a quantidade de elementos **menores** que o número buscado;  
- `maior`: a quantidade de elementos **maiores** que o número buscado.

Se o elemento estiver presente no vetor, o programa também informa sua **posição relativa** dentro da busca.

---

## 🧠 Lógica da função principal

A função `buscaMenorMaiorBin()`:
1. Inicia os limites `esq` (esquerda) e `dir` (direita) do vetor.  
2. Calcula o índice do **meio** e compara com o elemento buscado.  
3. Ajusta os limites até encontrar o valor ou o ponto onde ele deveria estar.  
4. Define:
   ```c

## exemplo  de execução
 Digite o tamanho do vetor:
5
Digite o elemento 1: 2
Digite o elemento 2: 4
Digite o elemento 3: 6
Digite o elemento 4: 8
Digite o elemento 5: 10
Digite o elemento que deseja buscar: 6
Menor: 2 | Maior: 2



   *menor = esq;
   *maior = tam - esq;
