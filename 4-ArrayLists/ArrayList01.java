import java.util.Iterator;

public class ArrayList01 {
    public static void main(String[] args) {
        BookList list = new BookList();
        list.add(new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925));
        list.add(new Book("To Kill a Mockingbird", "Harper Lee", 1960));
        list.add(new Book("1984", "George Orwell", 1949));
        // list.iterator().forEachRemaining(System.out::println);
        Iterator<Book> iterator = list.iterator();
        while(iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}