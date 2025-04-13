package tarefa2;

public class TesteLivro {

	public static void main(String[] args) {
		
		Livro livro1 = new Livro ("Java Guia do Programador", "Peter Jandl", "8539901869","Focado em fundamentos e prática");
		Livro livro2 = new Livro ("Harry Potter e a Pedra Filosofal", "J.K. Rowling", "8532530788");
		
		System.out.println("Dados do primeiro livro");
		System.out.println(livro1.toString());
		
		System.out.println("-----------------------------------");
		
		System.out.println("Dados do segundo livro");
		System.out.println(livro2.toString());
	}
}