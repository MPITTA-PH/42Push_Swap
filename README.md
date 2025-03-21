# 42Push_Swap 🎲

## Preview

https://github.com/user-attachments/assets/c3bef038-3bd5-4375-9b29-d043f8659a74


## Description 🇬🇧

This project consists of a communication program between a client and a server using UNIX signals. The server is started first and displays its PID. When the client is executed, it receives the server's PID and a string as parameters, sending this string through the SIGUSR1 and SIGUSR2 signals. When the server receives the message, it immediately prints the received content. In addition, it can receive strings from several clients consecutively without having to be restarted.

## Technologies Used

- Programming in C
- Data Structures - using stack to order the integers
- Sorting Algorithms - I used the turkish algorithm
- Memory Management
- Optimization and Efficiency
- Testing and Debugging - I tested with the 42Checker, Valgrind and PushSwap Visualizer
  

## How to Run

- Clone the repository;

- Access the project folder;

- Compile the files;

- Start the server:

- The server will print its PID;

- In another terminal window, run the client, passing the server's PID and the desired message;

- The server will print the received message immediately;


## Contributing
- Feel free to contribute! Follow these steps:
- Fork the project;
- Create a branch for your feature: git checkout -b my-new-feature;
- Commit your changes: git commit -m 'Adding a new feature;
- Push to the branch: git push origin my-new-feature;
- Open a Pull Request;

  


## Descrição 🇵🇹
Este projeto consiste na criação de um programa que ordene uma stack de inteiros, o fator surpresa deste projteto é o número limitado de operações disponiveis para o fazer (listadas abaixo). Devemos também fazer uma boa gestão da memória utilizada para realizar as operações, evitando leaks e conflitos na tomada de decisões.

### Estrutura Inicial
  - O projeto trabalha com duas pilhas, chamadas A e B.
  - No início:
  -- A pilha a contém uma quantidade aleatória de números inteiros únicos (positivos e/ou negativos).
  -- A pilha b está vazia.
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


## Contribuição
  - Sinta-se à vontade para contribuir! Siga estes passos:
    - Faça um fork do projeto;
    - Crie uma branch para sua funcionalidade: git checkout -b minha-nova-funcionalidade;
    - Commit suas alterações: git commit -m 'Adicionando uma nova funcionalidade;
    - Faça o push para a branch: git push origin minha-nova-funcionalidade;
    - Abra um Pull Request;
  

![Screenshot from 2025-03-20 19-11-52](https://github.com/user-attachments/assets/b161adfb-2260-4d6c-b70f-a573e7f58ea2)
