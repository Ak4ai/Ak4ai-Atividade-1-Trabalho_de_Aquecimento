<h1 align="center"><b>Simulação do Jogo da Vida de Conway</b></h1>

## Introdução
<p align="justify">
Este programa implementa uma simulação do famoso "Jogo da Vida" idealizado por John Conway em 1970. O jogo consiste em uma matriz de células, cada uma podendo estar em um de dois estados: vivo ou morto. A evolução das células segue regras simples, determinadas pelo número de células vizinhas vivas de cada célula, que determinam se uma célula continua viva, morre ou se uma célula morta se torna viva.
</p>
<p align="justify">
Este jogo tornou-se amplamente conhecido quando foi mencionado num artigo publicado pela Scientific American em 1970. Consiste numa grelha de células que, com base em algumas regras matemáticas, podem viver, morrer ou multiplicar-se. Dependendo das condições iniciais, as células formam vários padrões ao longo do jogo.
</p>

<p align="center">
  <img src="https://github.com/Ak4ai/Ak4ai-Atividade-1-Trabalho_de_Aquecimento/assets/129908980/68c8d7b9-f618-44de-b1cf-334b67400e31">
</p>

 
## Regras
  <p>O Jogo da Vida é um autômato celular criado por John Horton Conway em 1970. O jogo é simples, mas pode gerar comportamentos complexos e emergentes.</p>

  <h3>Para um espaço que está povoado:</h3>

  <table>
    <tr>
      <th>Vizinhos</th>
      <th>Resultado</th>
    </tr>
    <tr>
      <td>0 ou 1</td>
      <td>Morre (suicídio)</td>
    </tr>
    <tr>
      <td>2 ou 3</td>
      <td>Sobrevive</td>
    </tr>
    <tr>
      <td>4 ou mais</td>
      <td>Morre (superpopulação)</td>
    </tr>
  </table>

  <h3>Para um espaço que está vazio ou despovoado:</h3>

  <table>
    <tr>
      <th>Vizinhos</th>
      <th>Resultado</th>
    </tr>
    <tr>
      <td>3</td>
      <td>Torna-se povoada</td>
    </tr>
  </table>

  <h2>Exemplos</h2>

  <table>
    <tr>
      <th>Estado Atual</th>
      <th>Próxima Geração</th>
    </tr>
    <tr>
      <td>Célula com 1 vizinho</td>
      <td>Morre</td>
    </tr>
    <tr>
      <td>Célula com 2 vizinhos</td>
      <td>Sobrevive</td>
    </tr>
    <tr>
      <td>Célula com 3 vizinhos</td>
      <td>Sobrevive</td>
    </tr>
    <tr>
      <td>Célula com 4 vizinhos</td>
      <td>Morre</td>
    </tr>
    <tr>
      <td>Célula vazia com 3 vizinhos</td>
      <td>Torna-se povoada</td>
    </tr>
  </table>
</body>
</html>

 
## Objetivos
<p align="justify">
O objetivo deste projeto é criar um sistema que simule o Jogo da Vida em uma matriz bidimensional, permitindo a visualização da evolução das células ao longo do tempo através de um arquivo de texto. O usuário pode definir o tamanho da matriz, os elementos iniciais e a quantidade de gerações desejadas.
</p>

## Funcionalidades
- O programa lê a matriz inicial de um arquivo de texto.
- Implementa as regras do Jogo da Vida para calcular as próximas gerações.
- Registra cada geração em um arquivo de texto.
- Permite ao usuário definir o número de iterações desejado.

## Arquivos
### Dataset
- `input.txt`: Contém a matriz inicial junto com seu tamanho.
- `history.txt`: Registra as gerações geradas.

### Código-fonte
- `matrix.hpp`: Contém o cabeçalho da classe Matrix.
- `matrix.cpp`: Implementa as funções da classe Matrix.
- `main.cpp`: Arquivo principal.

## Compilação e Execução
* | Comando           | Função                           |                     
  | ------------------| -------------------------------- |
  | `make clean`      | Apaga a última compilação.       |
  | `make`            | Compila o programa.              |
  | `make run`        | Executa o programa compilado.    |

## Funcionamento do Código
<p align="justify">
O código utiliza a classe `Matrix` para representar e manipular a matriz do Jogo da Vida. A função `JogoDaVida` implementa as regras do jogo e calcula a próxima geração. O método `run` executa o jogo, permitindo ao usuário definir o número de iterações desejado e registrando cada geração no arquivo de histórico.
</p>

## Testes
<p align="justify">
Foram realizados testes com matrizes de diferentes tamanhos para verificar o comportamento do programa. Os resultados mostraram a evolução das células ao longo das gerações, demonstrando padrões característicos do Jogo da Vida, como formações estáveis e oscilantes.
</p>

## Conclusão
<p align="justify">
O Jogo da Vida de Conway é uma demonstração fascinante de como padrões complexos podem surgir a partir de regras simples. Além de ser uma ferramenta interessante para explorar conceitos de auto-organização e emergência na ciência computacional.
</p>

## Contato
<div>
<a style="color:black" href="mailto:jprs1308@gmail.com?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>jprs1308@gmail.com</i>
</a>
</div>

## Referências
- Jogo da vida. In: WIKIPÉDIA: a enciclopédia livre. Flórida: Wikimedia Foundation, 2022. Disponível em: [https://pt.wikipedia.org/wiki/Jogo_da_vida](https://pt.wikipedia.org/wiki/Jogo_da_vida). Acesso em: 15 mar. 2024.
