#include "DoublyList.hpp"
#include <stdexcept>

using namespace std;

int main()
{
    // Original test flow
    DoublyList<int> dlist;
    dlist.append(4);
    dlist.append(30);
    dlist.append(23);

    cout << "Original checks: ";
    cout << dlist.getLength() << " ";
    cout << dlist.getElement(1) << " ";

    dlist.insert(1, 19);
    cout << dlist.getElement(1) << " ";

    dlist.remove(1);
    cout << dlist.getLength() << " ";

    dlist.replace(2, 54);
    cout << dlist.getElement(2) << " ";

    bool found = dlist.search(54);
    cout << found << "\n";

    // More test cases
    /*
    cout << "Test 1 - print list: " << dlist;

    dlist.insert(0, 99);
    cout << "Test 2 - insert at head, first element: "
         << dlist.getElement(0) << "\n";

    dlist.insert(dlist.getLength(), 77);
    cout << "Test 3 - insert at tail, last element: "
         << dlist.getElement(dlist.getLength() - 1) << "\n";

    dlist.remove(0);
    cout << "Test 4 - remove head, new first element: "
         << dlist.getElement(0) << "\n";

    dlist.remove(dlist.getLength() - 1);
    cout << "Test 5 - remove tail, new length: "
         << dlist.getLength() << "\n";

    cout << "Test 6 - search missing value (500): "
         << dlist.search(500) << "\n";

    dlist.clear();
    cout << "Test 7 - clear + isEmpty: "
         << dlist.isEmpty() << "\n";

    try {
        dlist.getElement(0);
        cout << "Test 8 - out_of_range check: failed (no exception)\n";
    }
    catch (const out_of_range&) {
        cout << "Test 8 - out_of_range check: passed\n";
    }
    */
    return 0;
}
