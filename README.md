
# 🏰 Simulador de Xadrez - Do Novato ao Aventureiro

## 📜 Sobre
Esse projeto é a evolução do meu código do **Desafio Novato** para o **Desafio Aventureiro**.
A ideia é simular movimentos de peças de xadrez no console usando C, com foco em treinar laços (`for`, `while`, `do-while`) e um pouco de lógica.

No nível aventureiro, a estrela é o **Cavalo** 🐴 com seu movimento em "L".

---

## 🔄 Alterações do Novato para o Aventureiro

### O que tinha no Novato:
- Torre andando pra direita com **for**.
- Bispo indo na diagonal com **while**.
- Rainha desfilando pra esquerda com **do-while**.

### O que mudou no Aventureiro:
- **Visual repaginado** 🖌️:
  - Adicionei emojis pras peças ♟️.
  - Mensagens mais claras e engraçadas.
  - Separação de cada peça com títulos.

- **Novo movimento: Cavalo** 🐴:
  - Movimento em "L": duas casas pra baixo e uma pra esquerda.
  - Usei **for** + **while** pra simular a jogada.
  - Mostra passo a passo no console.

- **Organização**:
  - Código ficou mais limpinho e fácil de ler.
  - Saídas indetadas pra parecer mesmo um "passo-a-passo".

---

## 🖥️ Como rodar
1. Salva o código em um arquivo `.c`, tipo `xadrez.c`.
2. Compila:
   ```bash
   gcc xadrez.c -o xadrez
   ```
3. Roda:
   ```bash
   ./xadrez
   ```

---

## 🎯 Objetivo
Treinar laços aninhados e entender melhor lógica de movimentação em C, mas sem deixar o código chato.

---

## 📌 Observação
Esse código é puramente educativo. Não é um jogo de xadrez completo, mas já dá pra imaginar as peças se mexendo no tabuleiro.

