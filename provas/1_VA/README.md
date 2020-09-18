<h1 align="center">👨🏻‍💻 INTRODUÇÃO À PROGRAMAÇÃO</h1>
<h2 align="center">1ª Verificação de aprendizagem</h2>

### DESAFIO 1

​Você comprou um jogo da memória com 16 peças para jogar contra um amigo. As regras do jogo são simples: inicialmente o jogador 1 levanta uma pedra e em seguida levanta a segunda. Se as duas forem iguais, elas são retiradas do jogo, o jogador1 ganha 1 ponto e passa para a vez para o jogador 2. Caso elas sejam diferentes, passa para a vez do jogador2. Informe quem foi o vencedor ou se houve empate.

![1VA_1](https://user-images.githubusercontent.com/22121448/93561593-ddb1a080-f95a-11ea-974e-f05a4a4912fe.png)

---

### [DESAFIO 2](Batalha_Naval.c)

​O jogo batalha naval é extremamente conhecido e viciante. Trata-se da disputa entre dois jogadores, onde o objetivo de cada jogador é destruir as navegações inimigas. Cada jogador tem a informação das suas embarcações, desconhecendo a posição das navegações inimigas.​ Cada jogador visualiza a posição de suas embarcações através de uma grade.

**_Exemplo de visualização de cada jogador:_**

![1VA_2](https://user-images.githubusercontent.com/22121448/93561594-de4a3700-f95a-11ea-86a0-bff0abc1b786.png)

Este jogo apresenta 4 tipos de navegações:

- ![1VA_3](https://user-images.githubusercontent.com/22121448/93561595-dee2cd80-f95a-11ea-99de-b998c2a898a4.png) A embarcação que ocupa uma célula da grade.
- ![1VA_4](https://user-images.githubusercontent.com/22121448/93561596-dee2cd80-f95a-11ea-9e6e-d293e017254c.png) A embarcação que ocupa duas células de forma horizontal.
- ![1VA_5](https://user-images.githubusercontent.com/22121448/93561597-dee2cd80-f95a-11ea-875d-210d36f589b7.png) A embarcação que ocupa duas células, sendo que uma célula localizada na parte superior direita.
- ![1VA_6](https://user-images.githubusercontent.com/22121448/93561599-df7b6400-f95a-11ea-83cb-bc2c32d80e09.png) A embarcação que ocupa duas células, sendo que uma célula localizada na parte superior esquerda.

**Funcionamento do jogo**

Inicialmente, cada jogador começa com uma embarcação de cada tipo posicionadas aleatoriamente na grade​, ou seja, cada jogador possui 4 embarcações cada um, sendo 1 embarcação de cada tipo.

**IMPORTANTE**: As embarcações não podem ser posicionadas de forma sobreposta!

Uma vez que cada jogador sabe a posição de suas próprias embarcações, o jogo começa com o jogador 1 escolhendo uma célula do tabuleiro para realizar um bombardeio. Caso a célula escolhida tenha uma embarcação inimiga,a embarcação deve ser destruída (removida da grade do adversário, mesmo que esta embarcação seja de 2 células) e a vez passa para o jogador 2. Caso contrário, se a célula escolhida não for uma embarcação, a vez passa para o jogador 2 da mesma forma. Caso contrário, se a célula escolhida for uma embarcação do próprio jogador,esta embarcação deve ser destruída (removida de sua grade), passando a vez para o jogador 2. Este processo se repete para o jogador 2 e assim sucessivamente.

O jogo termina quando um dos jogadores não possuir mais embarcações. O jogo deve informar o vencedor.

**OBS**: O jogador escolhe uma célula do tabuleiro para realizar um bombardeio. Caso a célula escolhida tenha uma embarcação inimiga, a embarcação deve ser destruída (removida da grade do adversário, mesmo que esta embarcação seja de2células).Caso contrário, se a célula escolhida não for uma embarcação, não acontece nada. Caso contrário, se a célula escolhida for uma embarcação do próprio jogador, esta embarcação deve ser destruída (removida de sua grade). Imprima uma mensagem informando qual dos cenários aconteceu:

- “Embarcação inimiga destruída!”
- “Não houve destruição.”
- “Erro. Própria navegação destruída!

---

### DESAFIO 3

​O jogo The Maze Runner trata-se da disputa entre dois jogadores, onde o objetivo de cada jogador é chegar ao ‘​fim​’ vivo. Inicialmente, cada jogador lança dois dados, o jogador que obtiver a maior soma dos valores dos dois dados começa (considere dados com valores de 1 a 6).

- Os dois jogadores começam na célula ‘​início​’.
- Os dois jogadores começam com ​vida = 10 pontos​. A pontuação máxima da vida é 10 pontos não podendo ser ultrapassado.
- Os dois jogadores podem estar na mesma célula ao mesmo tempo.

Uma vez definido o jogador que inicia, este jogador lança 1 (um)dado e o seu valor determina o número de células a serem percorridas. Após a jogada do primeiro jogador, o segundo jogador faz o mesmo processo. Implemente todo o funcionamento do jogo.

O tabuleiro apresenta células de diferentes cores, onde cada cor representa uma ação sobre o jogador:

- ![1VA_7](https://user-images.githubusercontent.com/22121448/93562784-16527980-f95d-11ea-86ae-acc741789ec0.png) A célula branca representa um espaço neutro onde não há ação sobre o jogador

- ![1VA_8](https://user-images.githubusercontent.com/22121448/93562785-16527980-f95d-11ea-89e9-a5f480c9e0cd.png) A célula vermelha penaliza o jogador em 3 pontos de vida

- ![1VA_9](https://user-images.githubusercontent.com/22121448/93562787-16eb1000-f95d-11ea-82fd-9d51bd760886.png) A célula verde recupera 1 ponto de vida do jogador

- ![1VA_10](https://user-images.githubusercontent.com/22121448/93562788-16eb1000-f95d-11ea-90d9-dbb44e954945.png) A célula amarela aprisiona o jogador por um turno sem jogar

- ![1VA_11](https://user-images.githubusercontent.com/22121448/93562789-1783a680-f95d-11ea-96d5-ab32ef724b13.png) A célula azul permite que o jogador jogue novamente

- ![1VA_12](https://user-images.githubusercontent.com/22121448/93562781-15b9e300-f95d-11ea-8fcc-10767abb968a.png) A célula preta faz o jogador voltar para o início (desconsidere as células de início e fim)

**Tabuleiro do jogo:**

![1VA_13](https://user-images.githubusercontent.com/22121448/93568111-13a85200-f966-11ea-9c91-0d113bc84ffd.png)

---

### DESAFIO 4

​The Walking Dead é uma febre mundial. Esta série de zumbis despertou o seu interesse para o desenvolvimento de um jogo de sobrevivência. Neste jogo, existem zumbis, obstáculos (pedras, árvores, carros parados,...) e Rick, o personagem principal. O objetivo de Rick é encontrar a única saída existente em meio a uma horda de zumbis e obstáculos espalhados no cenário.

Nesta questão, você deve desenvolver ​1 estágio​ deste jogo, respeitando as seguintes instruções:

1. O Cenário possui 100 metros quadrados.

2. Rick acorda atordoado em algum lugar aleatório no cenário, com uma arma sem balas.

3. Existem 15 zumbis espalhados aleatoriamente pelo cenário.

4. Os obstáculos estão em toda parte. São ao todo 4 carros, 7 árvores e 8 pedras distribuídas aleatoriamente.

5. No cenário existe uma única saída, também definida aleatoriamente. Se ela estiver bloqueada por obstáculos, Rick não tem saída e morrerá. Caso contrário, se Rick alcançar a saída, o jogo é encerrado.

6. Rick possui 4 movimentações possíveis: cima, baixo, esquerda e direita. Embora a vida de Rick esteja complicada, existem 4 balas espalhadas no cenário. Se Rick se movimentar e tiver uma bala naquela posição, Rick carregará a arma imediatamente.

7. Se Rick tentar se mover para uma região em que há um obstáculo, ele permanece onde está e não se movimenta. Caso ele se movimente para uma região em que há um zumbi, existem duas possibilidades: se Rick estiver com a arma descarregada, ele é atacado e morre; caso contrário, Rick usa a bala no zumbi.

8. Obstáculos são estáticos, não se movimentam.

9. Zumbis possuem 4 movimentações possíveis: cima, baixo, esquerda e direita. Os zumbis que estão a 3 metros quadrados de Rick passam a persegui. lo. Os que estão mais distantes, ficam parados.

10. Toda vez que Rick realizar um movimento no cenário, a posição dos zumbis próximos deve ser atualizada.

**Implemente o jogo e informe a situação de Rick: _morreu_ ou _fugiu_.**

---

### DESAFIO 5

Você deve implementar um jogo que simula o dia a dia de Walter White =)

Walter White é um professor de química em uma escola, mas costuma fazer hora extra com Jesse Pinkman em um novo negócio. Na escola, Walter precisa pegar 4 produtos químicos (1,2,3,4) para a fabricação da sua solução. Esses produtos encontram-se em uma sala de 25m². Nesta sala, o itens são organizados da seguinte forma:

![1VA_14](https://user-images.githubusercontent.com/22121448/93566930-29b51300-f964-11ea-95ab-a3aa3eaa48dd.png)

Walter só pode pegar 1 item de cada produto, para que a escola não dê conta. Caso ele pegue mais de um item do mesmo produto, ele é preso e o jogo termina.<br/>Após pegar os itens necessários, Walter deve sair pela porta pela qual entrou. Se tentar sair pela porta sem ter pego todos os 4 itens, uma mensagem deverá ser exibida para lembrá-lo de pegar.<br/> Ao sair da porta, Walter encontra-se no estacionamento, devendo pegar o seu carro (5) e dirigir-se à saída da escola. Se Walter tentar pegar outro carro,deve ser exibida uma mensagem informando que o carro não é dele.

**_Mapa do estacionamento:_**

![1VA_15](https://user-images.githubusercontent.com/22121448/93566933-2a4da980-f964-11ea-8a5d-d9e75d0b579c.png)

Ao sair da escola, Walter precisa ir até a casa Jesse para pegá-lo.<br/> **_Veja o mapa abaixo:_**

![1VA_16](https://user-images.githubusercontent.com/22121448/93567697-6f261000-f965-11ea-8118-ee57be5eb1e8.png)

No mapa, existem 4 letras, **E** (é a saída da escola por onde Walter está saindo com o carro), **P** é a polícia (você deve evitar passar por lá, senão, você tem 50% de chance de ser preso, ou 50% de ser liberado e perder os produtos), **J** é a casa de Jesse (você deve se deslocar até lá e pegá-lo). Finalmente, **S** é a saída (você deve acessá-la após pegar Jesse e estar com todos os itens). Caso tente pegar a saída sem Jesse e os produtos,uma mensagem deve ser mostrada para lembrá-lo. Ao chegar na saída com Jesse e os itens, Walter finalmente inicia a produção (informar se produção normal ou dobrada) e o jogo é encerrado.<br/>Caso chegue à saída e não tenha produtos,e os produtos não existem mais no cenário,deve ser informado que não haverá trabalho hoje e o jogo é encerrado!
