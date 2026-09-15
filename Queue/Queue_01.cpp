#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // 1. Enqueue / Insert
    q.push(10);
    q.push(20);
    q.push(30);

    // Queue: 10 20 30

    // 2. Front element
    cout << "Front: " << q.front() << endl;

    // 3. Rear element
    cout << "Rear: " << q.back() << endl;

    // 4. Dequeue / Delete
    q.pop();

    // Queue: 20 30

    // 5. Check empty
    if (q.empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    // 6. Size
    cout << "Size: " << q.size() << endl;

    return 0;
}