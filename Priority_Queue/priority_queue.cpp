#include <iostream>
#include <vector>
#include <cassert>

class PriorityQueue {
private:
    std::vector<int> pq;
    int n;

    void exch(int i, int j) {
        int temp = pq[i];
        pq[i] = pq[j];
        pq[j] = temp;
    }

    void swim(int k) {
        while (k > 1 && pq[k / 2] < pq[k]) {
            exch(k, k / 2);
            k = k / 2;
        }
    }

    void sink(int k) {
        while (2 * k <= n) {
            int j = 2 * k;
            if (j < n && pq[j] < pq[j + 1]) j++;
            if (pq[k] >= pq[j]) break;
            exch(k, j);
            k = j;
        }
    }

public:
    PriorityQueue(int capacity) : n(0) {
        pq.resize(capacity + 1);
    }

    void insert(int m) {
        pq[++n] = m;
        swim(n);
    }

    int maxDel() {
        int maxP = pq[1];
        pq[1] = pq[n--];
        pq[n + 1] = 0; // loitering
        sink(1);
        return maxP;
    }

    bool isEmpty() {
        return n == 0;
    }

    int size() {
        return n;
    }
};

int main() {
    PriorityQueue pQueue(10);

    pQueue.insert(10);
    pQueue.insert(9);
    pQueue.insert(7);
    pQueue.insert(11);

    assert(pQueue.maxDel() == 11);

    pQueue.insert(15);
    pQueue.insert(16);
    pQueue.insert(1);

    assert(pQueue.maxDel() == 16);

    std::cout << "All assertions passed!" << std::endl;

    return 0;
}
