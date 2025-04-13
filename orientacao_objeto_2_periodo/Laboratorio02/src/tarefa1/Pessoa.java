package tarefa1;

public class Pessoa {
	
	private String cpf; 
	private String nome;
	
	public Pessoa (String cpf, String nome){
		this.cpf = cpf;
		this.nome = nome;
	}


	public String getNome() {
		return nome;
	}


	public void setNome(String nome) {
		this.nome = nome;
	}


	public String getCpf() {
		return cpf;
	}


	public String toString () {
		return "CPF: " + getCpf()
			 + "\nNome: " + getNome();
	}
}