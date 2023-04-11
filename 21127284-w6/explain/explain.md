# Dữ liệu in ra màn hình
Giải thích từng output in ra màn hình.

---


```cpp
Base b1;
Base b2(3);
Base* pb = new Base(1);
```
Output
```console
Base constructor-0 param
Base constructor-1 param
Base constructor-1 param
```
Giải thích

- Khởi tạo từng object ứng với các tham số đầu vào khác nhau.

---
```cpp
DerivedA da1;
DerivedA da2(2);
DerivedA da3(2, 3);
DerivedA da4(da2);
```
Output
```console
Base constructor-0 param
DerivedA constructor-0 param
Base constructor-0 param
DerivedA constructor-1 param
Base constructor-0 param
DerivedA constructor-2 params
Base constructor-0 param
```
Giải thích

- Hàm khởi tạo của lớp DerivedA được gọi khi khơi tạo các đối tượng da1, da2, da3, da4 và khi hàm khởi tạo này chạy thì sẽ gọi đến hàm khởi tạo của lớp Base. Lý do là DerivedA là lớp kế thừa từ lớp Base.

- Do đó ta có thể thấy output in ra dòng khởi tạo Base trước.

---
```cpp
pb = new DerivedA(4, 5);
```
Output
```console
Base constructor-0 param
DerivedA constructor-2 params
```
Giải thích

- Cũng như trên khi ta tạo 1 object DerivedA thì object Base sẽ được tạo ra trước do lớp DerivedA kế thừa từ lớp Base.

---
```cpp
DerivedB db1;
DerivedB db2(2.7);
DerivedB db3(3, 2.7);
DerivedB db4(db2);
```
Output
```console
Base constructor-0 param        //db1
DerivedB constructor-0 param    //db1
Base constructor-0 param        //db2
DerivedB constructor-1 param    //db2
Base constructor-1 param        //db3
DerivedB constructor-2 params   //db3
Base copy constructor           //db4
DerivedB copy constructor       //db4
```
Giải thích
- Khi khởi tạo 1 đối tượng derivedB thì hàm khởi tạo của lớp DerivedB được chạy, do lớp DerivedB được kế thừa từ lớp Base nên cần phải khởi tạo đối tượng Base trước nên in ra 2 dòng.

- Đối với db3 và db4 do khi khởi tạo hàm còn yêu cầu chạy hàm khởi tạo của Base có tham số truyền vào nên output khác so với db1 và db2
```cpp
DerivedB(int u, float x) :Base(u) {...}     // db3

DerivedB(const DerivedB& db) :Base(db){...} // db4
```
---
```cpp
pb = new DerivedB(4, 5);
```
Output
```console
Base constructor-1 param
DerivedB constructor-2 params
```
Giải thích
- Khi khởi tạo 1 đối tượng derivedB thì phải khởi tạo 1 đối tượng base trước. Mà khởi tạo derivedB với 2 tham số truyền vào nên hàm khởi tạo của đối tượng Base là Base(u) nên kết quả in ra như trên.
---
```cpp
f(b1);
f(da1);
f(db1);
```
Output
```cosole
Base copy constructor   //f(b1)
Function f              //f(b1)
Base destructor         //f(b1)
Base copy constructor   //f(da1)
Function f              //f(da1)
Base destructor         //f(da1)
Base copy constructor   //f(db1)
Function f              //f(db1)
Base destructor         //f(db1)
```
Giải thích
- Do truyền vào là tham trị nên khi gọi hàm sẽ copy đối tượng Base (da1 và db1 có thể copy lưu vào đối tượng base là vì nó là con của lớp base), do đó trước khi hàm được chạy sẽ in ra dòng "Base copy constructor".

- Sau khi ra khỏi hàm thì đối tượng base sẽ bị xóa.

---
```cpp
delete pb;
```
Output
```console
Base destructor
```
Giải thích

- Do pb là 1 con trỏ của lớp Base nên khi gọi "delete" thì hàm destructor của lớp Base sẽ được gọi
---

Cuối cùng sau khi chạy hết chương trình thì các hàm destuctor sẽ được chạy. Chạy theo quy tắc hàm hủy của lớp con sẽ được gọi trước sau đó đến hàm hủy của lớp cha.

Output
```console
DerivedB destructor
Base destructor
DerivedB destructor
Base destructor
DerivedB destructor
Base destructor
DerivedB destructor
Base destructor
DerivedA destructor
Base destructor
DerivedA destructor
Base destructor
DerivedA destructor
Base destructor
DerivedA destructor
Base destructor
Base destructor
Base destructor
```