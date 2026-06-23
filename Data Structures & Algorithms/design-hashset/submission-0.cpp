class MyHashSet {
public:
    // keeping it static because , we need it persistent across all objects
         list <int> nums;

    MyHashSet() {
    }
    
    void add(int key) {
        auto it  = find(nums.begin(),nums.end(),key);
        if(it !=nums.end()){
            return;
        } else {
        nums.push_back(key);
        }
    }
    
    void remove(int key) {
        nums.remove(key);
    }
    
    bool contains(int key) {
        auto it  = find(nums.begin(),nums.end(),key);
        if(it !=nums.end()){
            return true;
        } else {
            return false;
        } 
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */