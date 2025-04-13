package tarefa1;

public class TestePessoa {

	public static void main(String[] args) {

		Pessoa p1 = new Pessoa ("12345", "Rafael Santos");
		Pessoa p2 = new Pessoa ("54321", "Gustavo Silva");

		System.out.println("Dados da primeira pessoa");
		System.out.println("CPF: "  + p1.getCpf());
		System.out.println("Nome: " + p1.getNome());

		System.out.println("----------------------------------");

		System.out.println("Dados da segunda pessoa");
		System.out.println(p2.toString());

	}
}