# 🏰 Simulador de Xadrez - Do Novato ao Mestre #
# 📜 Sobre #
Esse projeto é a evolução do meu código do Desafio Novato para o Desafio Aventureiro, e agora alcança o **Nível Mestre!**
A ideia é simular movimentos de peças de xadrez no console usando C, com foco em treinar laços (for, while, do-while), recursividade e um pouco de lógica.

No nível mestre, a parada fica séria com recursividade e loops aninhados complexos! 🧠

# 🔄 Alterações do Novato para o Aventureiro para o Mestre #
O que tinha no Novato:
Torre andando pra direita com for.

Bispo indo na diagonal com while.

Rainha desfilando pra esquerda com do-while.

O que mudou no Aventureiro:
Visual repaginado 🖌️:

Adicionei emojis pras peças ♟️.

Mensagens mais claras e engraçadas.

Separação de cada peça com títulos.

Novo movimento: Cavalo 🐴:

Movimento em "L": duas casas pra baixo e uma pra esquerda.

Usei for + while pra simular a jogada.

Mostra passo a passo no console.

Organização:

Código ficou mais limpinho e fácil de ler.

Saídas indetadas pra parecer mesmo um "passo-a-passo".

# 🚀  O que mudou no Nível Mestre #
Recursividade na jogada! ♻️:

As movimentações da Torre, Rainha e Bispo agora usam funções recursivas. Mais elegante e desafiador!

Cavalo com movimentos complexos e precisos 🎯:

O Cavalo agora se move em "L" (duas casas para baixa e uma para a esquerda) usando loops aninhados com continue e break para um controle de fluxo super detalhado.

Bispo em camadas 📈:

O Bispo também ganhou loops aninhados dentro da sua recursividade, com um loop externo para o movimento vertical e um interno para o horizontal. Uma jogada dupla de técnica!

# Organização 📚:

O código foi reestruturado com mais funções e comentários detalhados para explicar o uso da recursividade e dos loops aninhados.

# 🖥️ Como rodar
Salva o código em um arquivo .c, tipo xadrez.c.

Compila:

gcc xadrez.c -o xadrez

Roda:

./xadrez

# 🎯 Objetivo
Treinar laços aninhados, recursividade e controle de fluxo avançado para entender melhor a lógica de movimentação em C, sem deixar o código chato – na verdade, ficou ainda mais maneiro!

# 📌 Observação
Esse código é puramente educativo. Não é um jogo de xadrez completo, mas agora dá pra sentir a força das técnicas avançadas por trás dos movimentos das peças no tabuleiro!