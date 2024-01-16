//!  380. Insert Delete GetRandom O(1)








class RandomizedSet {
public:
    vector<int> num;
    unordered_map<int,int>idxMap;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(idxMap.find(val) != idxMap.end()){
            return false;
        }
        num.push_back(val);
        idxMap[val] = num.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(idxMap.find(val) == idxMap.end()){
            return false;
        }
        int last = num.back();
        idxMap[last] = idxMap[val];
        num[idxMap[last]] = last;
        num.pop_back();
        idxMap.erase(val);
        return true;
    }
    
    int getRandom() {
        return num[rand() % num.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */