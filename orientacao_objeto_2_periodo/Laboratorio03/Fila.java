package collections;

import java.util.LinkedList;
import java.util.Queue;

public class Fila {
	
	public static void main(String[] args) {
		
		// Sintaxe para declara uma Fila
		Queue<String> fila = new LinkedList<> ();
		
		// Offer e add - . adicionam elementos na fila
		// DIfereneça é o comportamento ocorre quando a fila está cheia
		fila.add("Ana");// lança uma exceção
		fila.offer("Bia"); // Retorna um boolean
		fila.offer("Carlos");
		fila.offer("Daniel");
		fila.offer("Rafaela");
		fila.offer("Gui");
		
		// Peek e elemente -> obter o porximo elemento da fila (sem remover)
		// DIfereneça é o comportamento quando a fila está vazia
		 // Retorna o primeiro elemento da fila, ou null se a fila estiver vazia, sem removê-lo.
		System.out.println(fila.peek()); 
		// Retorna o primeiro elemento da fila, mas lança uma exceção (NoSuchElementException) se a fila estiver vazia.
		System.out.println(fila.element());
		
		
		 // Remove e retorna o primeiro elemento da fila, ou retorna null se a fila estiver vazia.
		System.out.println(fila.poll());  
		// Remove e retorna o primeiro elemento da fila, mas lança uma exceção (NoSuchElementException) se a fila estiver vazia.
		System.out.println(fila.remove());
		
		// fila.size();    Retorna o número de elementos na fila.
		// fila.clear();   Remove todos os elementos da fila, deixando-a vazia.
		// fila.isEmpty()  Retorna true se a fila estiver vazia, e false caso contrário.
		// fila.contains(...); Retorna true se a fila contiver o elemento, false caso contrário.
	}
}
