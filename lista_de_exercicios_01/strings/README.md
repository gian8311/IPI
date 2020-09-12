<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>

## A lista de exercícios completa pode ser encontrada [aqui](https://docs.google.com/document/d/1s3Dfu_cX1HYqZEL8H-lu3WdOVe5-O7oIKFsH-ny2Pjs)

## 📝 Strings

### 1 - Receber um nome e imprimir as 4 primeiras letras do nome.

#### [Solução](ex01.c)

### 2 - Ler nome, e idade, se idade maior ou igual a 18 anos, imprime o nome da pessoa e a frase “deve votar”, caso contrário imprimir “Não é obrigado a votar”.

#### [Solução](ex02.c)

### 3 - Crie uma programa que lê uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.

#### [Solução](ex03.c)

### 4 - Crie um programa que recebe uma string e um caractere, e apague (substitua por ‘ ’ (espaço)) todas as ocorrências desse caractere na string.

#### [Solução](ex04.c)

### 5 - Digite um nome, calcule e retorne quantas letras tem esse nome.

#### [Solução](ex05.c)

### 6 - Receba uma palavra e imprima de trás-para-frente.

#### [Solução](ex06.c)

### 7 - Receber uma palavra, calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.

#### [Solução](ex07.c)

### 8 - Crie um programa que pede ao usuário o tamanho do texto que deseja digitar. Em seguida, o programa pede ao usuário que digite um texto. O programa deve transformar alguns dos caracteres em maiúsculos, outros em minúsculos e outros permanecem como estão. Para isso, você deve navegar por cada caractere do texto, e gerar um número aleatório 0 ou 1. Se o número gerado for 0, o caractere atual é convertido para minúsculo, se o número for 1, o caractere é convertido para maiúsculo. Imprima o texto resultante.

#### [Solução](ex08.c)

### 9 - Crie um programa que compara duas strings. Imprima `Eh igual`, se o valor das duas strings for igual. Caso contrário, imprima `Nao eh igual`.

#### [Solução](ex09.c)

### 10 - Fazer um programa que:

**a)** leia uma frase de 80 caracteres, incluindo brancos.

**b)** conte e imprima quantos brancos existem na frase.

**c)** conte e imprima quantas vezes a letra ‘a’ aparece.

**d)** substitua as vogais pelo caractere ‘X’.

#### [Solução](ex10.c)

### 11 - Escreva um programa que leia a idade e o primeiro nome de várias pessoas. Seu programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa mais jovem e mais velha.

#### [Solução](ex11.c)

### 12 - Escreva um programa que recebe uma string S e inteiros não-negativos I e J. Concatene a frase "Ola mundo" com o segmento S[I..J]. Imprima o texto concatenado.

#### [Solução](ex12.c)

### 13 - Escreva um programa que leia um número N de palavras e diga qual das palavras é a primeira e a última na ordem alfabética.

#### [Solução](ex13.c)

### 14 - O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado, Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR (com caracteres maiúsculos)

**OBS**: Os caracteres 'x', 'y' e 'z', que são os três últimos devem ser substituídos por 'A', 'B' e 'C' respectivamente.<br/>
**OBS**: O caractere ' ' (espaço deve ser mantido)

#### [Solução](ex14.c)

### 15 - Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene a str2 N vezes com str1.

#### [Solução](ex15.c)

### 16 - O jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta, tendo como dica o número de letras e o tema ligado à palavra. A cada letra errada, o usuário perde uma tentativa (o número é determinado pelo programador). O jogo termina ou com o acerto da palavra ou com o término do número de tentativas.

#### Para começar o jogo se imprime um underline correspondente ao lugar de cada letra.<br/>Por exemplo, para a palavra "AMOR", se escreve:

#### A M O R → \_ \_ \_ \_

#### O jogador que tenta adivinhar a palavra deve ir dizendo as letras que podem existir na palavra. Cada letra que ele acerta é escrita no espaço correspondente.

#### A M O R → A \_ O R

#### Caso a letra não exista nessa palavra, imprime-se que a letra está incorreta, e reduz-se o número de tentativas.

#### [Solução](ex16.c)
