//! 706. Design HashMap



class MyHashMap {
    int myMap[1000001];
public: 
    MyHashMap() {
        for(int i=0; i<1000001; i++){
            myMap[i] = -1;
        }
    }
    
    void put(int key, int value) {
        myMap[key] = value;
    }
    
    int get(int key) {
        return myMap[key];
    }
    
    void remove(int key) {
        myMap[key] = -1;
    }
};
