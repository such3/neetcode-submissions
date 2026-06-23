/*
    MyHashMap (Implementation using singly linked list - std::list)

    IDEA:
    - We store (key, value) pairs in a list.
    - There is NO real hashing here (no buckets).
    - So every operation is O(n) in worst case.

    WHY THIS WORKS:
    - list allows dynamic insertion and deletion.
    - we scan linearly to find keys.

    TIME COMPLEXITY:
    - put: O(n)
    - get: O(n)
    - remove: O(n)

    WHY NOT HASHING HERE:
    - We are intentionally avoiding unordered_map (problem constraint).
    - This is a "design thinking" baseline before real hash table.

    IMPORTANT SYNTAX NOTES:
    - use "auto &p" when you want to MODIFY elements
    - use "it->first / it->second" with iterators
    - NEVER erase while using range-for loop (unsafe)
*/

class MyHashMap {
public:
    list<pair<int,int>> nums;

    MyHashMap() {
    }

    void put(int key, int value) {
        // search if key exists → update
        for (auto &p : nums) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        // if not found → insert new pair
        nums.push_back({key, value});
    }

    int get(int key) {
        // IMPORTANT: use reference or const ref to avoid copies
        for (const auto &p : nums) {
            if (p.first == key) {
                return p.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        // must use iterator when erasing from list
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (it->first == key) {
                nums.erase(it);
                return; // safer than break (exits function immediately)
            }
        }
    }
};