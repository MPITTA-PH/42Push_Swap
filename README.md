# 42Push_Swap 🎲

## Preview

https://github.com/user-attachments/assets/c3bef038-3bd5-4375-9b29-d043f8659a74

## Description 🇬🇧
This project consists of creating a program that sorts a stack of integers. The surprising factor of this project is the limited number of operations available to do so (listed below). We must also manage the memory used to perform the operations well, avoiding leaks and conflicts in decision making.

## Technologies Used
- Programming in C
- Data structures - using stacks to sort data
- Sorting algorithms - I used the Turkish algorithm
- Memory management
- Optimization and efficiency
- Testing and debugging - I tested with 42Checker, Valgrind and PushSwap Visualizer

### Initial Structure
- The project works with two stacks, called A and B.
- At the beginning:
- Stack a contains a random amount of unique integers (positive and/or negative).
- Stack b is empty.
### Objective
- Sort the numbers in stack A in ascending order using a limited set of operations.
### Available Operations

    sa
    sb
    ss

- sa (swap a)
- Swaps the first two elements from the top of stack a.
- If there are less than two elements, do nothing.

- sb (swap b)
- Swap the first two elements on top of stack b.
- If there are less than two elements, do nothing.

- ss (swap both)
- Execute sa and sb simultaneously.
---
    pa
    pb

- pa (push a)
- Move the first element on top of stack b to the top of stack a.
- If b is empty, do nothing.

- pb (push b)
- Move the first element on top of stack a to the top of stack b.
- If a is empty, do nothing.
---
    ra
    rb
    rr

- ra (rotate a)
- Move all elements on the stack up one position.
- The first element becomes the last element.

- rb (rotate b)
- Move all elements on the stack b up one position.
- The first element becomes the last element.

- rr (rotate both)
- Runs ra and rb at the same time.
---
    rra
    rrb
    rrr

- rra (reverse rotate a)
- Moves all elements in the stack down one position.
- The last element becomes the first.

- rrb (reverse rotate b)
- Moves all elements in the stack b down one position.
- The last element becomes the first.

- rrr (reverse rotate both)
- Runs rra and rrb at the same time.

## How to Run
- Clone the repository; - Access the project folder;
- Compile the files;
- Use the executable followed by the arguments you want to sort (integers, >/< 0);

      ./push_swap 7 46 2 -1 9 11 84 1787 17
---
## Using the PushSwap Visualizer
This is all a bit abstract, it becomes easier to understand what is happening if we see in practice what the program does in real time.

For this, I highly recommend Emmanuel Ruaud's o-reo repository.
In his repository, o-reo explains in detail how to run the PushSwap Visualizer.
The video at the beginning of this README is of the execution of this Visualizer.

You can find the repository at https://github.com/o-reo/push_swap_visualizer

## Contribution
- Feel free to contribute! Follow these steps:
- Fork the project;
- Create a branch for your feature: git checkout -b my-new-feature;
- Commit your changes: git commit -m 'Adding a new feature;
- Push to the branch: git push origin my-new-feature;
- Open a Pull Request;

---

## Descrição 🇵🇹
Este projeto consiste na criação de um programa que ordene uma stack de inteiros, o fator surpresa deste projteto é o número limitado de operações disponiveis para o fazer (listadas abaixo). Devemos também fazer uma boa gestão da memória utilizada para realizar as operações, evitando leaks e conflitos na tomada de decisões.

### Estrutura Inicial
  - O projeto trabalha com duas pilhas, chamadas A e B.
  - No início:
    - A pilha a contém uma quantidade aleatória de números inteiros únicos (positivos e/ou negativos).
    - A pilha b está vazia.
### Objetivo
  - Ordenar os números da pilha A em ordem crescente usando um conjunto limitado de operações.
### Operações Disponíveis

        sa
        sb
        ss
        
  - sa (swap a)
       - Troca os dois primeiros elementos do topo da pilha a.
       - Se houver menos de dois elementos, não faz nada.
    
  - sb (swap b)
       - Troca os dois primeiros elementos do topo da pilha b.
       - Se houver menos de dois elementos, não faz nada.
      
  - ss (swap ambas)
       - Executa sa e sb simultaneamente.
---
        pa
        pb
        
  - pa (push a)
       - Move o primeiro elemento do topo da pilha b para o topo da pilha a.
       - Se b estiver vazia, não faz nada.
  
  - pb (push b)
       - Move o primeiro elemento do topo da pilha a para o topo da pilha b.
       - Se a estiver vazia, não faz nada.
---
        ra
        rb
        rr
        
  - ra (rotate a)
      -  Move todos os elementos da pilha a uma posição para cima.
       - O primeiro elemento torna-se o último.

  - rb (rotate b)
       - Move todos os elementos da pilha b uma posição para cima.
       - O primeiro elemento torna-se o último.
      
  - rr (rotate ambas)
       - Executa ra e rb ao mesmo tempo.
---
        rra
        rrb
        rrr
        
  - rra (reverse rotate a)
       - Move todos os elementos da pilha a uma posição para baixo.
       - O último elemento torna-se o primeiro.

  - rrb (reverse rotate b)
       - Move todos os elementos da pilha b uma posição para baixo.
       - O último elemento torna-se o primeiro.

  - rrr (reverse rotate ambas)
       - Executa rra e rrb ao mesmo tempo.

## Tecnologias Utilizadas
- Programação em C
- Estruturas de dados - usando stacks(pilhas) para ordenar os dados
- Algoritmos de ordenação - utilizei o algoritmo turco
- Gestão de memória
- Otimização e eficácia
- Teste e debugging - testei com o 42Checker, Valgrind e PushSwap Visualizer


## Como Executar
  - Clone o repositório;
  - Acesse a pasta do projeto;
  - Compile os ficheiros;
  - Use o executavel seguido dos argumentos que pretende ordenar(nºs inteiros, >/< 0);
    
        ./push_swap 7 46 2 -1 9 11 84 1787 17
---
## Utilizar o PushSwap Visualizer
  Tudo isto fica um pouco abstracto, torna-se mais fácil de compreender o que está a acontecer se virmos na prática o que o programa faz em tempo real.

  Para tal recomendo vivamente o repositório do o-reo do Emmanuel Ruaud.
  No seu repositório o o-reo explica de forma detalhada como executar o PushSwap Visualizer.
  O vídeo no início deste README é da exucução desse Visualizer.

  Podem encontrar o repositório em https://github.com/o-reo/push_swap_visualizer

## Contribuição
  - Sinta-se à vontade para contribuir! Siga estes passos:
    - Faça um fork do projeto;
    - Crie uma branch para sua funcionalidade: git checkout -b minha-nova-funcionalidade;
    - Commit suas alterações: git commit -m 'Adicionando uma nova funcionalidade;
    - Faça o push para a branch: git push origin minha-nova-funcionalidade;
    - Abra um Pull Request;
  

![Screenshot from 2025-03-20 19-11-52](https://github.com/user-attachments/assets/b161adfb-2260-4d6c-b70f-a573e7f58ea2)
