//Use object oriented coding to code a Trapezoid class in C++
//4-6-2020, Dr_T
#include <iostream>
using namespace std;
class Trapezoid
{
  private:
    double sideA;
    double sideB;
    double height;
  public: 
    Trapezoid()
    {
      sideA = 0.0;
      sideB = 0.0;
      height = 0.0;
    }
    void setSideA(double sA) { sideA = sA; }
    void setSideB(double sB) { sideB = sB; }
    void setHeight(double h) { height = h; }
    double getSideA() const { return sideA; }
    double getSideB() const { return sideB; }
    double getHeight() const { return height; }
    double getArea() const 
    { 
      return (((sideA + sideB) / 2.0) * height); 
    }
    void printShape()
    {

   for (int row = 0; row < height; ++row)
   {

      for (int col = height - row; col > 0; --col)
      {

         cout << " ";

      }

      for (int col = 0; col < (sideB + 2 * row); ++col)
      {

         cout << "*";

      }

      cout << endl;

   }
}

};

//function definition
void populateTrapezoid(Trapezoid &tData)
{
  //declare and initialize local variables
  double a = 0.0, b = 0.0, h = 0.0;
  //accept data into tData
  cout << "\nPlease enter [a b h]: ";
  cin >> a >> b >> h;

  //set the tData
  tData.setSideA(a);
  tData.setSideB(b);
  tData.setHeight(h);
  //print the area
  cout << "\nA Trapezoid with sideA = " 
  << tData.getSideA() << " and sideB = " 
  << tData.getSideB() << " and height = " 
  << tData.getHeight() << " is " 
  << tData.getArea() << endl;
  //print the custom trapezoid on screen
  tData.printShape();

}
int main() 
{
Trapezoid t; //t is the object and the subject of the .dot notation
//put sample data in trapezoid and print the shape
t.setSideA(12.0);
t.setSideB(15.0);
t.setHeight(7.0);
cout << t.getArea() << endl;
//Dr. T Challenge - use a method to print, t, to the screen
t.printShape();

//write a void function to populate and print the t object
//pass  the t object by & ref (memory address)
//pass by & is more effcient you are not passing ALL the data
//we are writing a void function to perform operations on object
//function that is a member of a class = method
//function that is not a member of a class (C++ function)
  //***other languages use static as keyword - function not a member of a class
  populateTrapezoid(t);

  int decision = 0;

  do
  {
    populateTrapezoid(t);
    cout << "\nEnter any number to continue (-1 to exit): ";
    cin >> decision;
  }
  while(decision != -1); //exit condition
  cout << "\nProgram exit!!" << endl;

 return 0;
}