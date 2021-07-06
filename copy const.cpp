#include<iostream>
using namespace std;
class oops 
{
   private:
   int num1, num2;
   public:
   oops(int n1, int n2) 
   {
      num1 = n1;
      num2 = n2;
   }
   oops(const oops &n)
    {
      num1 = n.num1;
      num2 = n.num2;
   }
   void display() 
   {
      cout<<"num1 = "<< num1 <<endl;
      cout<<"num2 = "<< num2 <<endl;
   }
};
int main() 
{
   oops obj1(10, 20);
   oops obj2 = obj1;
   obj2.display();
   return 0;
}
