## **1. Print Square Star Pattern**

### **Description**

Given an integer **N**, print a square pattern of stars of size **N x N**.

---

### **Example 1:**

**Input:**

```
N = 5
```

**Output:**

```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```

---

### **Constraints:**

* 1 ≤ N ≤ 1000

---

### **Solution 1: Nested Loops**

We use two nested loops to print the pattern.

* Outer loop: Iterates over rows.
* Inner loop: Iterates over columns, printing `* `.

The **time complexity** is **O(N²)** and the **space complexity** is **O(1)**.

---

### **C++ Code**

```cpp
#include<iostream>
using namespace std;

void print(int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}
```

---

### **Output for N = 5**

```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
```
