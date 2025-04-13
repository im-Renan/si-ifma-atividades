package atividade2;

/**
 * Classe que representa uma população de baratas.
 * Permite simular o crescimento e a redução da população ao longo do tempo.
 * 
 * @author Renan
 */
public class PopulacaoDeBaratas {

    /** Quantidade atual de baratas na população */
    private long populacao;

    /**
     * Construtor que inicializa a população com um valor definido.
     * 
     * @param populacao Valor inicial da população de baratas
     */
    public PopulacaoDeBaratas(long populacao) {
        this.populacao = populacao;
    }

    /**
     * Construtor padrão que inicializa a população com 5 baratas.
     */
    public PopulacaoDeBaratas() {
        this.populacao = 5;
    }

    /**
     * Retorna a quantidade atual de baratas na população.
     * 
     * @return Quantidade de baratas
     */
    public long getPopulacao() {
        return populacao;
    }

    /**
     * Simula o passar do tempo, dobrando a população de baratas.
     */
    public void esperaUmTempo() {
        this.populacao *= 2;
    }

    /**
     * Simula a aplicação de inseticida, reduzindo a população em 25%.
     */
    public void pulveriza() {
        this.populacao -= this.populacao * 0.25;
    }

    /**
     * Retorna uma representação textual do estado atual da população.
     * 
     * @return String descrevendo a quantidade de baratas
     */
    @Override
    public String toString() {
        return "População de baratas: " + this.populacao;
    }
}