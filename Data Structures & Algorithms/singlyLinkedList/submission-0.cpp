class LinkedList {
   private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    Node* tail;
   public:

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        Node* current = head;
        for (int i = 0; i < index && current != nullptr; i++){
            current = current->next;
        }
        return (current == nullptr) ? -1 : current->data;
    }

    void insertHead(int val) {
        Node* toAdd = new Node;
        toAdd->data = val;
        toAdd->next = head;
        head = toAdd;
        if (tail == nullptr) tail = head;
    }

    void insertTail(int val) {
        Node* toAdd = new Node;
        toAdd->data = val;
        toAdd->next = nullptr;
        if (tail == nullptr) {
            head = tail = toAdd;
        } else {
            tail->next = toAdd;
            tail = toAdd;
        }
    }

    bool remove(int index) {
        if (head == nullptr) return false;
        // Remove Head
        if (index == 0){
            Node* doomed = head;
            head = head->next;
            if (head == nullptr) tail = nullptr;
            delete doomed;
            return true;
        }

        // Remove anything in the middle and tail
        Node* prev;
        prev = head;
        for (int i = 0; i < index-1; i++){
            if (prev == nullptr || prev->next == nullptr) return false;
            prev = prev->next;
        }

        if (prev->next == nullptr) return false;
        Node* doomed = prev->next;
        if (doomed == tail){
            tail = prev;
        }

        prev->next = doomed->next;
        delete doomed;
        return true;

    }

    vector<int> getValues() {
        vector<int> result;
        Node* current = head;
        while (current){
            result.push_back(current->data);
            current = current->next;
        }
        return result;
    }
};