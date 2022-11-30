#include <iostream>

using namespace std;

template<typename T>
struct node {
    T val;
    node *next;
};

// vector<int> v = new vector<int>();

template<typename T>
class LinkedList {
private:
    node<T> *head;
    node<T> *rear;
    int size;
public:
    LinkedList();
    LinkedList( LinkedList<T> &obj );
    ~LinkedList();
    void add( T val );
    void add( T val, int pos );
    bool isEmpty();
    void traversal();
    void clear();
    T remove();
    T remove( int pos );
    T& get( int pos );
    T& operator [] (int pos);
    LinkedList& operator ++ (int);
};

template<typename T>
LinkedList<T>::LinkedList() {
    head = rear = NULL;
    size = 0;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    cout << "Calling of Destructor!" << endl;
    clear();
}

template<typename T>
LinkedList<T>::LinkedList(LinkedList<T> &obj) {
    cout << "Calling of Copy Constructor!" << endl;
    next = NULL;
    prev = headNode;
    size = 0;
    for (int i=0; i < obj.size; i++) { 
        add( obj.get(i) );
    }
}

template<typename T>
T& LinkedList<T>::get(int pos) {
    if ( pos < 0 || pos > size-1 ) {
        cout << "ERROR!" << endl;
        exit(1);
    }
    node<T> *tmp = head;
    for (int i=0; i < pos; i++) tmp = tmp->next;
    return tmp->val;
}

template<typename T>
T& LinkedList<T>:: operator [] (int pos) {
    return get(pos);
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator++(int) {
    LinkedList<T>& l_old = *(new LinkedList<T> (*this));
    for (int i=0; i < size; i++) {
        this->get(i)++;
    }
    return l_old;
}


template<typename T>
bool LinkedList<T>::isEmpty() {
    return (size == 0);
}

template<typename T>
void LinkedList<T>::add(T val, int pos) {
    if ( size == 0) {
       
        headNode -> next = new node<T> 
        val = val;
        size++;
    }
    else if ( pos == size ) {
        next = NULL;
        prev = 
        size++;
    }
    else {
            node<T> *tmp = headNode;
            for (int i=0; i < (pos-1); i++) tmp = tmp->next;
            node<T> *tmp2 = new node<T>;
            tmp2->val = val;
            tmp2->next = tmp->next;
            tmp->next = tmp2;
            size++;
        }

    }
}

template<typename T>
void LinkedList<T>::add( T val ) {
    add( val, size );
}

template<typename T>
void LinkedList<T>::() {
    node<T> *tmp = head;
    for (int i=0; i < size; i++) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

template<typename T>
T LinkedList<T>::remove( int pos ) {
    if ( size == 0 || pos >= size  ) {
        cout << "ERROR" << endl;
        return -1;
    }
    else if ( pos == 0 ) {
        node<T> *tmp = head;
        head = head->next;
        T tmpval = tmp->val;
        size--;
        if ( size == 0 ) rear = NULL;
        delete tmp;
        return tmpval;
    }
    else if ( pos == size - 1 ) {
        node<T> *tmp = head;
        for ( int i=0; i < size-2; i++ ) tmp = tmp->next;
        node<T> *tmp2 = tmp->next;
        tmp->next = tmp->next->next;
        T tmpval = tmp2->val;
        size--;
        rear = tmp;
        delete tmp2;
        return tmpval;
    } else {
        node<T> *tmp = head;
        for ( int i=0; i < pos-1; i++ ) tmp = tmp->next;
        node<T> *tmp2 = tmp->next;
        tmp->next = tmp->next->next; // = tmp2->next
        T tmpval = tmp2->val;
        size--;
        delete tmp2;
        return tmpval;
    }

}

template<typename T>
T LinkedList<T>::remove() {
    return remove( size-1 );
}

template<typename T>
void LinkedList<T>::clear() {
    while ( size > 0 ) {
        remove(size-1);
    }
}




int main( ) {

    LinkedList<double> l;

    l.add( 1.1 );
    l.add( 2.2 );
    l.add( 3.3 );
    l.add( 4.4, 1 );
    l.add( 5.5, 3 );

    l.traversal();


    cout << l.remove() << endl;
    cout << l.remove(1) << endl;

    l.traversal();

    cout << l.get(1) << endl;
    l.get(1) = 6.6;
    l.traversal();



//    cout << l.get(4) << endl;

//    l.clear();
//    l.traversal();

    cout << endl << endl;

    LinkedList<double> l2 = l;

    l2.traversal();

    l.get(0) = 7.7;
    l.get(2) = 8.8;
    cout << "l: ";
    l.traversal();
    cout << "l2: ";
    l2.traversal();

    cout << endl << endl;

    l[0] = 1.1;
    l[1] = 2.2;
    l[2] = 3.3;
    l.traversal();

    cout << endl << endl;
    LinkedList<double> l3 = l++;

    l3.traversal();
    l.traversal();

    return 0;
}

