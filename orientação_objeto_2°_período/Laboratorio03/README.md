# Laboratório - Programação Orientada a Objetos

Este laboratório foi desenvolvido para a disciplina de Programação Orientada a Objetos (POO) do curso de Sistemas de Informação - IFMA. O objetivo é aplicar os conceitos de orientação a objetos com a implementação de duas classes que simulam o comportamento de um automóvel e de uma população de baratas, explorando práticas como encapsulamento, sobrecarga de construtores e o uso de métodos como `toString()`.

## Funcionalidades

### ✅ Tarefa 1 - Classe Automóvel
Criação da classe `Automovel` para modelar um automóvel com atributos como placa, quilometragem, capacidade do tanque, eficiência e quantidade de combustível.

Implementação dos métodos de operação como:

- `dirige` (para simular a viagem e o consumo de combustível).
- `abastece` (para reabastecer o tanque de combustível).
- `gastoDeCombustivel` e `autonomia` para calcular o consumo e a distância que o automóvel pode percorrer com o combustível disponível.
- Acompanhamento das viagens realizadas e quilometragem total.

### ✅ Tarefa 2 - Classe População de Baratas
Criação da classe `PopulacaoDeBaratas` para modelar o crescimento de uma população de baratas com atributos como tamanho da população.

Implementação dos métodos:

- `esperaUmTempo` (para duplicar a população, simulando a reprodução das baratas).
- `pulveriza` (para reduzir a população em 25%, simulando a pulverização com inseticida).
- Exibição do estado da população após a simulação usando o método `toString()`.

## Tecnologias Utilizadas
🖥️ Linguagem de Programação: Java

## Como Executar

### 1. Requisitos
- Java JDK 8 ou superior instalado.
- IDE Java (Eclipse, IntelliJ IDEA, NetBeans, etc).

### 2. Passos
1. Clone o repositório:

```
git clone https://github.com/im-Renan/si-ifma-atividades.git
```
2. Abra a IDE de sua preferência (como Eclipse, IntelliJ IDEA ou NetBeans) e importe o projeto:

- No Eclipse: `File > Import > Existing Projects into Workspace`
- No IntelliJ: `File > Open` e selecione a pasta do projeto

3. Após importar, navegue até a pasta `src` e abra os arquivos de teste:

- `TesteAutomovel.java` (para a classe `Automovel`)
- `TestePopulacaoDeBaratas.java` (para a classe `PopulacaoDeBaratas`)

4. Para executar, clique com o botão direito sobre os arquivos de teste e selecione a opção `Run`.
