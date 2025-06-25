SINTESE_AULA_01_AED2.txt
=====================================================================

*** SÍNTESE DE ESTUDO: FUNDAMENTOS DE ALGORITMOS E ESTRUTURAS DE DADOS II ***

Esta aula introdutória estabelece os conceitos essenciais para a análise e o desenvolvimento de algoritmos e estruturas de dados.


*** 1. DEFINIÇÃO E REPRESENTAÇÃO DE ALGORITMOS ***

O QUE É UM ALGORITMO?
- É um processo sistemático que computa um resultado a partir de dados de entrada[cite: 43].
- Sua descrição é feita para humanos, devendo ser clara e sem detalhes desnecessários[cite: 44].
- É fundamental que um algoritmo especifique as restrições sobre seus dados de entrada e que sua correção seja justificada[cite: 47, 48].

FORMAS DE REPRESENTAÇÃO:
- NARRATIVA: Utiliza uma linguagem quase natural, que pode ser de fácil compreensão, mas também imprecisa e prolixa[cite: 65, 66].
- FLUXOGRAMA: Representa a lógica do algoritmo de forma gráfica, enfatizando os passos individuais e o fluxo de execução[cite: 67].


*** 2. ESTRUTURAS DE DADOS E IMPLEMENTAÇÃO ***

O QUE SÃO ESTRUTURAS DE DADOS?
- São maneiras de organizar dados para que se possa operar sobre eles de forma eficiente[cite: 73]. Exemplos incluem Pilhas (o último a entrar é o primeiro a sair) e Filas (o primeiro a entrar é o primeiro a sair)[cite: 74].

RELAÇÃO COM PROGRAMAS:
- Um programa de computador é a expressão de um algoritmo, mais as estruturas de dados, em uma linguagem formal que o computador entende[cite: 75].
- O desenvolvimento passa por duas fases: a resolução do problema (criando o algoritmo) e a implementação (codificação)[cite: 76].


*** 3. ANÁLISE DE COMPLEXIDADE ***

A análise de algoritmos foca em dois aspectos principais: a CORREÇÃO do método e a ANÁLISE DE COMPLEXIDADE, que avalia a eficiência[cite: 88].

TIPOS DE COMPLEXIDADE:
- DE TEMPO: Mede o tempo necessário para computar o resultado[cite: 91].
- DE ESPAÇO: Mede a memória necessária para armazenar as estruturas de dados[cite: 95].

CASOS DE ANÁLISE: A eficiência pode ser medida considerando três cenários:
- PIOR CASO: Instância que torna o algoritmo mais lento. É a análise mais importante, pois fornece um limite superior[cite: 92, 96].
- MELHOR CASO: Instância que torna o algoritmo mais rápido[cite: 93].
- CASO MÉDIO: Média de tempo considerando todas as instâncias possíveis[cite: 94].

COMPLEXIDADE ASSINTÓTICA: Para uma análise objetiva, a complexidade é expressa como uma função matemática que considera a quantidade de dados ('n') como muito grande[cite: 108, 109]. Nesta análise:
- Constantes aditivas e multiplicativas são desconsideradas[cite: 110].
- Apenas o termo de maior grau da expressão é considerado[cite: 111].


*** 4. NOTAÇÃO ASSINTÓTICA E FUNÇÕES COMUNS ***

NOTAÇÕES (COTAS):
- O (Big-O): Define um LIMITE SUPERIOR (pior caso)[cite: 120]. T(n) pertence a O(f(n)) se T(n) <= c * f(n) para um 'c' e n0[cite: 121].
- OMEGA: Define um LIMITE INFERIOR (melhor caso)[cite: 124]. T(n) pertence a Omega(f(n)) se T(n) >= c * f(n)[cite: 125].
- THETA: Define um LIMITE JUSTO, quando os limites superior e inferior são a mesma função[cite: 129].

FUNÇÕES DE COMPLEXIDADE COMUNS (da mais rápida para a mais lenta):
- O(1): Constante
- O(log n): Logarítmica
- O(n): Linear
- O(n log n): Log-linear
- O(n^2): Quadrática
- O(n^k): Polinomial
- O(k^n), O(n!): Exponencial (deve ser evitada)[cite: 131, 132, 133, 134].


*** 5. CONCEITO DE ÓTIMO ***

- PROBLEMA vs. ALGORITMO: A complexidade de um problema (Omega) é o número mínimo de passos que *qualquer* algoritmo precisaria para resolvê-lo[cite: 152].
- ALGORITMO ÓTIMO: Um algoritmo é considerado ótimo se sua complexidade de pior caso (O) for igual à complexidade do problema (Omega)[cite: 153]. Por exemplo, como a leitura de duas matrizes n x n exige Omega(n^2) passos, um algoritmo de soma que executa em O(n^2) é ótimo[cite: 156, 157].


*** 6. RECURSIVIDADE ***

- DEFINIÇÃO: É a técnica na qual um procedimento contém uma ou mais chamadas a si mesmo[cite: 173].
- VANTAGENS E DESVANTAGENS:
    - PRÓ: Soluções recursivas são frequentemente mais concisas e elegantes[cite: 177, 178].
    - CONTRA: Podem ser mais lentas que soluções iterativas devido ao custo de tempo e memória para gerenciar a pilha de chamadas[cite: 179, 180, 181].
- APLICAÇÃO: É inerentemente adequada para problemas de "divisão e conquista", como o Quicksort e o percurso em árvores[cite: 183]. O cálculo do fatorial de um número é um exemplo clássico que pode ser implementado tanto de forma recursiva quanto não recursiva[cite: 185].
