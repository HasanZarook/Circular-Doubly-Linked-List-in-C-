
# 🔵 Circular Doubly Linked List in C++

This project implements a **Circular Doubly Linked List (CDLL)** in C++. The list allows insertion, deletion, traversal, and search operations.

---

## 📝 Features

* ✅ Insert nodes at the **beginning**, **end**, or a **specific position**
* ✅ Delete nodes from the **beginning**, **end**, or a **specific position**
* ✅ Search for a value and display **all positions** where it occurs
* ✅ Check if the list is **empty**
* ✅ Print the **entire list**
* ✅ **Circular structure**: Last node points to the head, and head’s previous points to the end

---

## ⚡ How It Works

1. The list is **circular and doubly-linked**: each node has a `next` and `previous` pointer.
2. `insertbegin()`, `insertEnd()`, and `insertAt()` allow adding new nodes.
3. `deleteBegin()`, `deleteEnd()`, and `deleteAt()` allow removal of nodes.
4. `search()` locates all occurrences of a value and prints their positions.
5. `print()` displays the entire list in sequence.
6. `isEmpty()` checks whether the list has any nodes.

---

## 🔧 Example Usage

```cpp
CircularDoublyList ll;
ll.isEmpty();       // Check if the list is empty

ll.insertbegin(8);  // Insert 8 at the beginning
ll.insertEnd(3);    // Insert 3 at the end
ll.insertAt(5, 2);  // Insert 5 at position 2

ll.print();         // Prints the list
ll.search(3);       // Search for value 3

ll.deleteBegin();   // Delete the first node
ll.deleteEnd();     // Delete the last node
ll.deleteAt(2);     // Delete node at position 2

ll.print();         // Prints the updated list
```

---

## ⚠️ Notes

* The **list automatically maintains its circular links** after insertions and deletions.
* The `nodesCount()` function helps with traversals and printing.
* The `search()` function **counts all occurrences** of a value and prints their positions.


