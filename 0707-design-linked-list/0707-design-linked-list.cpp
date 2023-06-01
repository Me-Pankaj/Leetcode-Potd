class MyLinkedList {
public:
    vector<int> data;
	
    MyLinkedList() {}
    
    int get(int index) {
        if(index < 0 or index >= data.size()) return -1;
        return data[index];
    }
    
    void addAtHead(int val) {
        data.insert(data.begin(), val);
    }
    
    void addAtTail(int val) {
        data.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index > data.size()) return;
        if(index == data.size()) {
            data.push_back(val);
            return;
        }

        data.insert(data.begin()+index, val);
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 or index >= data.size()) return;
        data.erase(data.begin() + index);
    }
};