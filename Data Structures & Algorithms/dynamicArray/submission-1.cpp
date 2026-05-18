class DynamicArray {
    int* arr;
    int size = 0;
    int cap;
public:

    DynamicArray(int capacity) {
        cap = capacity;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == cap) resize();
        arr[size++] = n;
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        cap = cap*2;
        int* newarr = new int[cap];
        for (int i = 0; i < size; i++) {
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
    }

    int getSize() {
        return size;

    }

    int getCapacity() {
        return cap;

    }
};
