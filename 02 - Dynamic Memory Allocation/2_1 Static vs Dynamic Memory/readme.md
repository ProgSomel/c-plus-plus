# Static(Stack or compile time) vs Dynamic Memory(Heap or runtime)

| Feature               | Static Memory                | Dynamic Memory                             |
|-----------------------|------------------------------|--------------------------------------------|
| 📦 Allocated At       | Compile Time                 | Runtime                                    |
| 🧠 Memory Lifetime    | Automatically managed        | You manually control (using new/delete)    |
| 📍 Storage Location   | Stack                        | Heap                                       |
| ⚠️ Size Flexibility   | Fixed size                   | Can change at runtime                      |
| ✅ Example            | `int arr[10];`               | `int* arr = new int[n];`                   |
