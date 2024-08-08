import java.util.Iterator;
import java.util.ArrayList;

public class BookList implements Iterable<Book> {
    private ArrayList<Book> books = new ArrayList<>();

    public int size() {
        return books.size();
    }

    public Book get(int index) {
        return books.get(index);
    }

    public void add(Book book) {
        books.add(book);
    }
    public Iterator<Book> iterator() {
        return books.iterator();
    }

}
