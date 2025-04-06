
## 🚀 Vector2D Mini Project (C++)

### 📄 Description:
This mini project implements a `Vector` class to represent a **2-dimensional vector quantity** (like in physics) using C++. It demonstrates **operator overloading** for performing vector arithmetic and comparisons, along with methods for calculating vector properties.

---

### ✨ Features:
- **Vector addition** using `+`
- **Scalar multiplication** using `*`
- **Equality comparison** using `==`
- **Magnitude calculation** using `magnitudeCalculation()`
- **Formatted output** using overloaded `<<`

---

### 🧠 Concepts Practiced:
- **Operator Overloading** (`+`, `*`, `==`, `<<`)
- **Friend Functions**
- **Encapsulation**
- **Constructor Initialization**
- **Mathematical modeling in C++**

---

### 🧪 Sample Usage:
```cpp
Vector V1(2, 3);
Vector V2(1, 2);

Vector V3 = V1 + V2;             // Vector addition
cout << V1 * 2 << endl;          // Scalar multiplication
cout << (V1 == V2) << endl;      // Comparison
cout << V1.magnitudeCalculation() << endl;  // Magnitude
cout << V3 << endl;              // Formatted output
```

---

### 🔧 Files:
- `main.cpp` – contains test cases and usage
- `vector.h` – contains the `Vector` class definition

---

### 📌 Notes:
- Uses `friend` function to overload `<<` since `ostream` is not a class member
- Avoids returning references to temporary objects (e.g., in `operator+`)
- Methods are marked `const` where applicable for safety

---
