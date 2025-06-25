# Síntese da Aula 2: Hashing

Esta aula introdutória estabelece os conceitos essenciais para a análise e o desenvolvimento de algoritmos e estruturas de dados.

### 1. Princípios Fundamentais do Hashing

* **Objetivo:** O método busca aproveitar o acesso randômico à memória para alcançar uma complexidade média de `O(1)` para busca, inserção e remoção. [cite: 165] No entanto, o pior caso de performance é `O(n)`. [cite: 165]
* **Função de Hash:** O coração do hashing é uma **função de dispersão** `h`, que mapeia um grande universo de chaves (domínio N) para um conjunto menor de índices de uma tabela (contradomínio M), [cite: 177] formalmente `h: N -> M`. [cite: 177]
* **Colisão:** Como o número de chaves possíveis é quase sempre muito maior que o tamanho da tabela (`|N| >> |M|`), [cite: 192] é inevitável que duas chaves diferentes `x` e `y` sejam mapeadas para o mesmo índice, ou seja, `h(x) = h(y)`. [cite: 193] Esse evento é chamado de **colisão**. [cite: 193]

### 2. Funções de Dispersão: Criação e Qualidades

Uma boa função de dispersão é essencial para a eficiência do método.

* **Qualidades Desejáveis:** [cite: 196]
    * **Poucas Colisões:** Deve espalhar as chaves uniformemente pela tabela. [cite: 196]
    * **Fácil de Computar:** Deve ser rápida e conter poucas operações aritméticas. [cite: 198]
    * **Uniformidade:** Todas as posições da tabela devem ter a mesma probabilidade de serem ocupadas. [cite: 199]

* **Métodos para Criar Funções de Hash:** [cite: 201]
    1.  **Método da Divisão:** A função é `h(x) = x mod m`, [cite: 203] onde `m` é o tamanho da tabela. [cite: 204] Recomenda-se que `m` seja um número primo não próximo a uma potência de 2 para garantir uma boa distribuição. [cite: 214]
    2.  **Método da Multiplicação:** A chave é multiplicada por uma constante (ou por si mesma) e os `k` bits do meio do resultado são extraídos para formar o índice. [cite: 217, 218] A dimensão da tabela `m` é, geralmente, uma potência de 2, como `m=2^k`. [cite: 221]
    3.  **Método da Dobra:** A chave é dividida em partes, que são então "dobradas" e combinadas (usando soma ou a operação XOR) para gerar o índice. [cite: 228, 232]

### 3. Estratégias de Tratamento de Colisões

Quando uma colisão ocorre, é necessário um procedimento especial para encontrar um local alternativo para a chave. [cite: 194, 195] As duas abordagens principais são:

#### A. Encadeamento (Chaining)

Neste método, as chaves que colidem são armazenadas em listas encadeadas. [cite: 240]

* **Encadeamento Exterior:** As listas são estruturas de dados externas à tabela hash, [cite: 241] exigindo alocação dinâmica de memória. [cite: 260] Cada posição da tabela atua como um "nó cabeça" para uma lista. [cite: 247] Embora o pior caso de busca seja `O(n)` (se todas as chaves caírem na mesma lista), [cite: 255] a complexidade média é `O(1)` se o fator de carga for mantido baixo. [cite: 258, 259]
* **Encadeamento Interior:** As listas de sinônimos compartilham o mesmo espaço da tabela. [cite: 242] Essa abordagem pode sofrer de **colisões secundárias** (fusão de listas de chaves não sinônimas) [cite: 277, 280] e torna a exclusão de chaves complexa, exigindo um estado "liberado" para as posições vagas. [cite: 285, 290]

#### B. Endereçamento Aberto (Open Addressing)

Este método armazena as chaves que colidem em outras posições livres dentro da própria tabela, [cite: 295] sem o uso de ponteiros. [cite: 297] Uma sequência de sondagem `h(x, k)` é usada para encontrar uma posição vaga, onde `k` é o número da tentativa. [cite: 298]

* **Tentativa Linear:** A próxima posição a ser tentada é a seguinte na sequência: `h(x, k) = (h'(x) + k) mod m`. [cite: 307] Sua principal desvantagem é o **agrupamento primário**, [cite: 309] onde longos blocos de posições ocupadas se formam. [cite: 309]
* **Tentativa Quadrática:** A sondagem usa um incremento quadrático: `h(x, k) = (h'(x) + c₁k + c₂k²) mod m`. [cite: 311] Isso resolve o agrupamento primário, [cite: 313] mas pode levar ao **agrupamento secundário**, [cite: 314] onde chaves sinônimas geram a mesma sequência de sondagem. [cite: 314]
* **Dispersão Dupla:** Usa uma segunda função de hash para determinar o passo da sondagem: `h(x, k) = (h'(x) + k * h''(x)) mod m`. [cite: 316] É considerado o método superior, pois as sequências de sondagem são diferentes mesmo para chaves sinônimas, [cite: 316] evitando ambos os tipos de agrupamento.