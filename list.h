class list{

    public:

    virtual void add(int num) = 0;
    virtual void removeAt(int pos) = 0;
    virtual int get(int pos) = 0;
    virtual void addAt(int num,int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print();// print only;
    virtual int summation() = 0; // return the sum of all elements in the arraylist
    virtual int flip(int num) = 0;
    virtual int min(int num) = 0;
    virtual int max(int num) = 0;
    virtual int review() = 0;
    //Lab Activity 
    virtual int size() = 0; // return the curren number of elements sa list
    virtual bool isEmpty() = 0;
    virtual bool contains(int num) = 0;
    virtual int find(int num) = 0;
    virtual int removeFirst() = 0;
    virtual int removeLast() = 0;
    virtual void removeAll(int num) = 0;
    virtual void print() = 0;
};