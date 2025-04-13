package tarefa2;

public class Livro {

	private String titulo;
	private String autor;
	private String isbn;
	private String descricao;

	public Livro (String titulo, String autor, String isbn, String descricao){
		this.titulo = titulo;
		this.autor = autor;
		this.isbn = isbn;
		this.descricao = descricao;
	}

	public Livro (String titulo, String autor, String isbn){
		this.titulo = titulo;
		this.autor = autor;
		this.isbn = isbn;
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public String getIsbn() {
		return isbn;
	}

	public void setIsbn(String isbn) {
		this.isbn = isbn;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	@Override
	public String toString() {
		if (this.descricao == null) {
			return "Titulo: " + this.titulo
					+ "\nAutor: " + this.autor
					+ "\nISBN: " + this.isbn
					+ "\nDescrição: Livro sem Descrição";
		} else {
			return "Titulo: " + this.titulo
					+ "\nAutor: " + this.autor
					+ "\nISBN: " + this.isbn
					+ "\nDescrição: " + this.descricao;
		}
	}
}