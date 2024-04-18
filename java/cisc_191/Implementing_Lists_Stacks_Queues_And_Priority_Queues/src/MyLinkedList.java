public class MyLinkedList<E> implements MyList<E> {
	private Node<E> head, tail;
	private int size = 0; // Number of elements in the list
 
	/** Create an empty list */
	public MyLinkedList() {
	}

	/** Create a list from an array of objects */
	public MyLinkedList(E[] objects) {
		for (int i = 0; i < objects.length; i++)
			add(objects[i]);
	}

	/** Return the head element in the list */
	public E getFirst() {
		if (size == 0) {
			return null;
		}
		else {
			return head.element;
		}
	}

	/** Return the last element in the list */
	public E getLast() {
		if (size == 0) {
			return null;
		}
		else {
			return tail.element;
		}
	}

	/** Add an element to the beginning of the list */
	public void addFirst(E e) {
		// Implemented in Section 24.4.3.1, so omitted here
	}

	/** Add an element to the end of the list */
	public void addLast(E e) {
		// Implemented in Section 24.4.3.2, so omitted here
	}

	@Override /** Add a new element at the specified index
	 			* in this list. The index of the head element is 0 */
	public void add(int index, E e) {
		// Implemented in Section 24.4.3.3, so omitted here
	}

	/** Remove the head node and
	 * return the object that is contained in the removed node. */
	public E removeFirst() {
		// Implemented in Section 24.4.3.4, so omitted here
	}
	 
	 /** Remove the last node and
	  * return the object that is contained in the removed node. */
	public E removeLast() {
		// Implemented in Section 24.4.3.5, so omitted here
	}

	@Override /** Remove the element at the specified position in this
	 			* list. Return the element that was removed from the list. */
	public E remove(int index) {
		// Implemented earlier in Section 24.4.3.6, so omitted
	}

	@Override /** Override toString() to return elements in the list */
	public String toString() {
		StringBuilder result = new StringBuilder("[");

		Node<E> current = head;
		for (int i = 0; i < size; i++) {
			result.append(current.element);
			current = current.next;
			if (current != null) {
				result.append(", "); // Separate two elements with a comma
			}
			else {
				result.append("]"); // Insert the closing ] in the string
			}
		}

		return result.toString();
	}

	@Override /** Clear the list */
	public void clear() {
		size = 0;
		head = tail = null;
	}

	@Override /** Return true if this list contains the element e */
	public boolean contains(Object e) {
		// Left as an exercise
		return true;
	}

	@Override /** Return the element at the specified index */
	public E get(int index) {
		// Left as an exercise
		return null;
	}

	@Override /** Return the index of the first matching element in
	 			* this list. Return −1 if no match. */
	public int indexOf(Object e) {
		// Left as an exercise
		return 0;
	}

	@Override /** Return the index of the last matching element in
	 			* this list. Return −1 if no match. */
	public int lastIndexOf(E e) {
		// Left as an exercise
		return 0;
	}
	
	@Override /** Replace the element at the specified position
	 			* in this list with the specified element. */
	public E set(int index, E e) {
		// Left as an exercise
		return null;
	}

	@Override /** Override iterator() defined in Iterable */
	public java.util.Iterator<E> iterator() {
		return new LinkedListIterator();
	}
 
	private class LinkedListIterator
	implements java.util.Iterator<E> {
		private Node<E> current = head; // Current index
  
		@Override
		public boolean hasNext() {
			return (current != null);
		}

		@Override
		public E next() {
			E e = current.element;
			current = current.next;
			return e;
		}

		@Override
		public void remove() {
			// Left as an exercise
		}
	}
 
	private static class Node<E> {
		E element;
		Node<E> next;
		
		public Node(E element) {
			this.element = element;
		}
	}
 
	@Override /** Return the number of elements in this list */
	public int size() {
		return size;
	}
}