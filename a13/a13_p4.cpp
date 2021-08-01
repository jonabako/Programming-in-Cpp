#include <iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A // -> add virtual keyword
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A // -> add virtual keyword
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

// Compilation Error Explanation:
// Error: request for member 'print is ambiguous'
/* 
lack of virtual inheritance results in compilation error, 
as both class B and C have their own 'x' members, therefore
virtual keyword ensures we do not overlap.
*/
