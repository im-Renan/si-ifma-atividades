package atividade2;

/**
 * Classe de teste para a classe {@link PopulacaoDeBaratas}.
 * Simula a criação de duas populações de baratas, o crescimento populacional
 * e a aplicação de inseticida, exibindo o estado das populações em cada etapa.
 * 
 * @author Renan
 */
public class TestaPopulacaoDeBaratas {

    /**
     * Método principal que executa a simulação das populações de baratas.
     * 
     * @param args Argumentos de linha de comando (não utilizados)
     */
    public static void main(String[] args) {

        // Cria uma população inicial de 10 baratas
        PopulacaoDeBaratas baratas1 = new PopulacaoDeBaratas(10);

        // Cria uma população padrão de 5 baratas
        PopulacaoDeBaratas baratas2 = new PopulacaoDeBaratas();

        // Exibe o estado inicial das populações
        System.out.println("População inicial:");
        System.out.println("Baratas1: " + baratas1.getPopulacao());
        System.out.println("Baratas2: " + baratas2.getPopulacao());
        System.out.println("------------------------------------");

        // Simula o crescimento da população de baratas1
        baratas1.esperaUmTempo();
        System.out.println("Baratas1 após o tempo de procriação: " + baratas1.getPopulacao());
        System.out.println("------------------------------------");

        // Aplica inseticida duas vezes na população de baratas1
        baratas1.pulveriza();
        System.out.println(baratas1 + " após a primeira pulverização!");
        System.out.println("------------------------------------");

        baratas1.pulveriza();
        System.out.println(baratas1 + " após a segunda pulverização!");
        System.out.println("------------------------------------");

        // Exibe o estado final da população de baratas2
        System.out.println("Estado final de baratas2: " + baratas2);
    }
}
