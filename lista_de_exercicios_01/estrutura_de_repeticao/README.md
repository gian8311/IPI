<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## A lista de exercícios completa pode ser encontrada [aqui](https://docs.google.com/document/d/1s3Dfu_cX1HYqZEL8H-lu3WdOVe5-O7oIKFsH-ny2Pjs)

### 1 - Faça um programa que leia 10 números inteiros (positivos ou negativos). Imprima a média dos valores, ignorando os não positivos.

#### [Solução](ex01.c)

### 2 - Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. <br/> Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

#### [Solução](ex02.c)

### 3 - A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

a) média do salário da população;

b) média do número de filhos;

c) maior e menor salário;

d) percentual de habitantes com mais de 2 filhos.

### A quantidade de habitantes que serão cadastrados é fornecida pelo usuário.

#### [Solução](ex03.c)

### 4 - No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:

excelente;

bom;

regular.

### Crie um algoritmo que receba a idade e a opinião de 10 espectadores, calcule e imprima:

a) A média das idades das pessoas que responderam excelente.

b) A quantidade de pessoas que responderam regular.

c) A percentagem de pessoas que responderam bom entre todos os expectadores analisados.

#### [Solução](ex04.c)

### 5 - Dado um número inteiro positivo, verificar se o número é primo ou não. <br/> OBS: Número primo é aquele que possui apenas dois divisores, o número 1 e o próprio número.

#### [Solução](ex05.c)

### 6 - Faça um programa que leia de forma indefinida vários números, calcule e mostre:

a) A soma dos números digitados

b) A quantidade de números digitados

c) A média dos números digitados

d) O maior número digitado

e) O menor número digitado

f) A média dos números pares

### Finalize a entrada de dados caso o usuário informe o valor 0.

#### [Solução](ex06.c)

### 7 - Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).

#### Ex: Se o número lido foi 4, imprimir:

4x1 = 4 <br/>
4x2 = 8 <br/>
4x3 = 12 <br/>
… <br/>
4x10 = 10

#### [Solução](ex07.c)

### 8 - Desenvolva um sistema de verificação do usuário. Para isso, crie uma variável inteira chamada de senha e atribua a ela um número inteiro de 4 dígitos. O programa deve pedir ao usuário uma senha, e verificar se a senha condiz com o valor armazenado na variável senha. Se a senha digitada não estiver correta, imprima “Senha Incorreta” e solicite novamente a senha. Se a senha digitada for a correta, deverá ser apresentada a mensagem “Senha Correta”. Vale salientar que o usuário só possui 3 tentativas para acertar a senha. Caso não acerte, deve ser impresso “acesso bloqueado”.

#### [Solução](ex08.c)

### 9 - Criar um programa que apresenta o seguinte menu:

BOAS VINDAS: <br/>
1 – Imprimir “Olá!”; <br/>
2 – Imprimir “Bem vindo!”; <br/>
3 – Sair do algoritmo;

### Se o usuário digitar a opção 1 ou 2, a respectiva mensagem é impressa. Em seguida, o menu é impresso novamente para que o usuário faça uma nova escolha. O programa só é encerrado quando o usuário digitar 3 para sair.

#### [Solução](ex09.c)

### 10 - A sequência de Fibonacci é uma sequência infinita composta por números que obedecem o seguinte padrão: 0 1 1 2 3 5 8 13…<br/> Como pode se ver, os dois primeiros números (0 1) quando somados dão origem ao terceiro (1). De modo que o n-ésimo número é fruto da soma dos dois anteriores.<br/>Crie um programa que pede ao usuário um número X, e imprima o X-ésimo valor da sequência.

#### Ex: Se o usuário digitar 6, o valor a ser impresso é 8, que é o sexto valor da sequência.

#### [Solução](ex10.c)

### 11 - Faça um programa que simule a urna eletrônica. A tela a ser apresentada deverá ser da seguinte forma:

### As opções são:

1 - Candidato Jair Rodrigues <br/>
2 - Candidato Carlos Luz <br/>
3 - Candidato Neves Rocha <br/>
4 - Nulo <br/>
5 - Branco <br/>
Entre com o seu voto:

### O programa deverá ler os votos dos eleitores e, quando o número 6 for lido, apresentar as seguintes informações:

a) O número de votos de cada candidato;

b) A porcentagem de votos nulos;

c) A porcentagem de votos brancos;

d) O candidato vencedor.

#### [Solução](ex11.c)

### 12 - Crie um jogo de adivinhação que deve ser jogado entre dois usuários. O primeiro usuário deve digitar três caracteres distintos.O segundo usuário deve digitar uma tecla na tentativa de acertar um dos três caracteres. Caso a tecla digitada esteja correta, imprima uma mensagem informando que ele acertou e quantos caracteres restam para ele acertar. Caso ele erre, imprima na tela e informe quantos caracteres restam e o número de tentativas restantes (o usuário só pode digitar no máximo 15 caracteres). O jogo termina quando o usuário acerta todos os caracteres ou quando não possui mais tentativas.

#### [Solução](ex12.c)

### 13 - Usando apenas os comandos printf("0"), printf("X") e printf("\n") e usando laços aninhados, faça o seguinte aparecer na tela.

![Padrão](https://user-images.githubusercontent.com/22121448/92329883-e2b04f00-f040-11ea-8d65-bb27a523d397.png)

#### [Solução](ex13.c)

### 14 - Dados um número inteiro N, N > 0, e uma sequência com N números inteiros maiores do que zero, determinar o fatorial de cada número da sequência.

#### [Solução](ex14.c)

### 15 - Crie um programa que desenhe a diagonal principal e a diagonal secundária do quadrado (o tamanho do quadrado deve ser fornecido pelo usuário), como a seguir:

#### Exemplo do quadrado com tamanho 5 (5 linhas e 5 colunas).

![Padrão](https://user-images.githubusercontent.com/22121448/92329828-8baa7a00-f040-11ea-9779-2b659ee545f9.png)

#### [Solução](ex15.c)

### 16 - Crie um algoritmo que simule o funcionamento de um caixa de supermercado. O caixa fica aberto até o fim do expediente e pode processar a compra de vários clientes. Cada cliente pode comprar vários itens de acordo com a tabela:

| Código | Item   |     Preço |
| :----- | :----- | --------: |
| 1      | Feijão |  R\$ 2,00 |
| 2      | Arroz  |  R\$ 1,50 |
| 3      | Carne  | R\$ 10,00 |
| 4      | Tomate |  R\$ 3,00 |
| 5      | Cebola |  R\$ 2,50 |

### Ao ler cada item deve ser exibida uma mensagem para o operador do caixa perguntando se há mais itens a serem processados. Ao final, exiba quanto a compra custou ao cliente. E então solicite do operador do caixa a informação se deseja fechar o caixa. Quando o caixa for fechado, imprima quanto de dinheiro aquele caixa apurou no dia.

#### [Solução](ex16.c)
