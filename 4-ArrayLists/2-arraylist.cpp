#include <iostream>
using namespace std;
template<class T>
class ArrayList {
private:
    T *arr;
    int size;
    int capacity;

    void allocate(int newCapacity) {
        T* newArr = new T[newCapacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

public:
    ArrayList() : arr(nullptr), size(0), capacity(0) {}

    ~ArrayList() {
        delete[] arr;
    }

    void init(int initialCapacity) {
        if (initialCapacity <= 0) {
            std::cerr << "Invalid capacity" << std::endl;
            return;
        }
        allocate(initialCapacity);
    }

    void add(const T& element) {
        if (size == capacity) {
            allocate(capacity == 0 ? 1 : capacity * 2);
        }
        arr[size] = element;
        size++;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    void insert(int index, const T& element) {
        if (index < 0 || index > size) {
            std::cerr << "Index out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }
        if (size == capacity) {
            allocate(capacity == 0 ? 1 : capacity * 2);
        }
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
    }

    T get(int index) const {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }
        return arr[index];
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }
};

int main() {
    ArrayList<int> list;
    list.init(2);
    list.add(1);
    list.add(2);
    list.add(3);

    for (int i = 0; i < list.getSize(); i++) {
        cout << list.get(i) << endl;
    }
    cout<<list.getCapacity()<<endl;
    cout<<list.getSize()<<endl;
    list.~ArrayList();
    return 0;
}
