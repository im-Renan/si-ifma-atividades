package atividade1;

/**
 * Classe de testes para a classe Automovel.
 * Realiza abastecimento, viagens e exibe informações sobre o carro.
 * 
 * @author Renan
 */
public class TesteAutomovel {

    public static void main(String[] args) {

        // Cria um automóvel com placa, capacidade do tanque e eficiência
        Automovel carro = new Automovel("PTY5B23", 50, 10);

        // Abastece 30 litros no carro
        carro.abastece(30);
        System.out.println("Quantidade de combustível no tanque: " + carro.getCombustivelNoTanque());

        // Dirige 400 km
        carro.dirige(400);
        System.out.println("Quantidade de combustível no tanque: " + carro.getCombustivelNoTanque());

        // Exibe número de viagens realizadas
        System.out.println("Viagens realizadas: " + carro.getNumeroDeViagensRealizadas());

        // Exibe quilometragem total
        System.out.println("Quilometragem total do automóvel: " + carro.getKmTotal());

        // Dirige mais 150 km
        carro.dirige(150);
        System.out.println("Quilometragem total do automóvel: " + carro.getKmTotal());
    }
}