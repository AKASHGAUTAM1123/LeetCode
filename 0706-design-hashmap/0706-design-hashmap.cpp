class MyHashMap {
public:
    vector<list<pair<int,int>>> table;
    int size = 1000;

    MyHashMap() {
        table.resize(size);
    }
    
    void put(int key, int value) {
        int idx = key % size;

        for (auto &p : table[idx]) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        table[idx].push_back({key, value});
    }
    
    int get(int key) {
        int idx = key % size;

        for (auto &p : table[idx]) {
            if (p.first == key)
                return p.second;
        }

        return -1;
    }
    
    void remove(int key) {
        int idx = key % size;

        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) {
                table[idx].erase(it);
                return;
            }
        }
    }
};