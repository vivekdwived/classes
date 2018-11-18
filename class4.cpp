	/*
	Write a definition of a class Rectangle using the Point class. A rectangle is specified by two corner points (bottom left and top right). The sides of the rectangle are parallel to the coordinate axes. The implementation of the class should be as follows: 
	The private data members of the class include all 4 corner points of the rectangle. 
	There are two constructors: one takes two points as arguments and creates a rectangle with the first point as the bottom left corner and the second as the top right corner, the other (default) constructor creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 
	Hint: use functions Set_X, Set_Y from the class Point to set the values of the corner points. 
	The print member function prints all 4 corners of the rectangle, using the member function print of the class Point. 
	Test the class Rectangle in main(), demonstrate that all member functions work as specified. 

	*/

	#include <iostream>
	using namespace std;


	// ********************************************************************
	//  Declaration of class Point
	// ********************************************************************

	// class Point represents a two-dimensional point
	class Point
	{
	public:
	  // default class constructor (with no arguments):
	  Point(); 

	  // class constructor that sets the coordinates x, y to the values xval,
	  // yval:
	  Point(int xval, int yval);

	  // member function for moving a point by dx, dy:
	  void Move(int dx, int dy);

	  // member functions for getting values of x, y:
	  int Get_X() const;
	  int Get_Y() const;

	  // member functions for setting x, y to xval, yval respectively  
	  void Set_X(int xval);
	  void Set_Y(int yval);

	//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void Print();

	// private data members x, y represent coordinates of the point:
	private:
	  int X;
	  int Y;
	};  


	// ********************************************************************
	//  Methods for class Point
	// ********************************************************************

	// class constructor sets X, Y to zero when no values are specified:
	Point::Point()
	{
	  X = 0;
	  Y = 0;
	}

	// class constructor sets X, Y to given values xval, yval:
	Point::Point(int xval, int yval)
	{
	  X = xval;
	  Y = yval;
	}

	// member function Move: increases the x coordinate by dx and the y
	// coordinate by dy.
	void Point::Move(int dx, int dy)
	{
	  X += dx;
	  Y += dy;
	}

	// Get_X returns the value of the X coordinate
	int Point::Get_X() const
	{
	  return X;
	}

	// Get_Y returns the value of the Y coordinate
	int Point::Get_Y() const
	{
	  return Y;
	}

	// Set_X sets the value of X coordinate to xval
	void Point::Set_X(int xval)
	{
	  X = xval;
	} 

	// Set_Y sets the value of Y coordinate to yval
	void Point::Set_Y(int yval)
	{
	  Y = yval;
	} 
	    

	//Lab 7 exercise 4.1. Add definition of member function print:
	void Point::Print()
	{
	 cout<<"("<<X<<","<<Y<<")"<<endl;
	}
	 

	// ********************************************************************
	//  Declaration of class Rectangle
	// ********************************************************************

	//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
	
	class rectangle{
	
	int X1,X2,Y1,Y2,X3,X4,Y3,Y4;
	public :
	
	//DEFAULT RECTANGLE
	
	rectangle();

	//parameterised rectangle
	
	rectangle(int x1,int y1,int x3,int y3);
	int area();
	//to get areas...dimensions are..
	int len();
	int bred();
	void Print();


	};

	//DEFINING THE DEFAULT RECTANGLE::::::
	rectangle::rectangle(){
	X1=0;
	Y1=0;
	X2=0;
	Y2=1;
	X3=1;
	Y3=0;
	X4=1;
	Y4=1;
	}
	
	rectangle::rectangle(int x1,int y1,int x3,int y3)
	{
			//let the rectangle be ABCD


	Point A;    //1ST VERTEX..OF RECT
	Point C;    // 3RD VERTEX..OF RECT
	// TO SET HTE COORDINATE VALUES OF X AND Y	FOR points A and C..diagonal points
	A.Set_X(x1);   
	A.Set_Y(y1);
	C.Set_X(x3);   
	C.Set_Y(y3);
	
	// now get these values as in to 2nd and 4 th vertices
	
	X2=C.Get_X();
	Y2=A.Get_Y();
	X4=A.Get_X();
	Y4=C.Get_Y();
	
	
	}

	int rectangle::len()
	{ return (X4-X1);}
	int rectangle::bred()
	{ return (Y4-Y1);}

	int rectangle::area()
	{ return len()*bred() ;}



	//print function fo vertices
	void rectangle::Print()
	{
		cout<<"1st vertex:"<<"("<<X1<<","<<Y1<<")"<<endl;
		cout<<"2nd vertex:"<<"("<<X2<<","<<Y2<<")"<<endl;
		cout<<"3rd vertex:"<<"("<<X3<<","<<Y3<<")"<<endl;
		cout<<"4th vertex:"<<"("<<X4<<","<<Y4<<")"<<endl;
	}
	// ********************************************************************
	//  main() function for testing classes Point and Rectangle
	// ********************************************************************



	// Testing classes Point and Rectangle
	int main()
	{
	// Declaring a point using default class constructor (x = y = 0):
	  Point p1;
	  cout<< "The x value for p1 is " << p1.Get_X() << endl;
	  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

	// Declaring a point with coordinates X = 2, Y = 3:
	  Point p2(2, 3);
	  cout<< "The x value for p2 is " << p2.Get_X() << endl;
	  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
	  cout<<"2nd point is :";
	  p2.Print();

	// Moving point p2 by (1, -1):
	  p2.Move(1, -1);
	  cout<< "After the move:" << endl;
	  cout<< "The x value for p2 is " << p2.Get_X() << endl;
	  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
	
		//Lab 7 exercise 4.1. Test member function print on points p1, p2:

	 cout<<"the 1st point is:";
	 p1.Print();
	 cout<<endl;
	 cout<<"the 2nd point after moving by (1,-1)  is:";
	 p2.Print();


	//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here: 
	
	 rectangle r1;	//object r1.....DEFAULT RECTANGLE
	 rectangle r2(1,2,3,4);	//object r2	
	
	cout<<"the vertices of (1st)our DEFAULT rectangle are:";
	r1.Print();
	cout<<endl;

	cout<<"the vertices of 2nd rectangle are:";
	r2.Print();
	cout<<endl;

	//PRINTING THE AREAS...
	
	cout<<"area of 1st rectangle is:";
	cout<<r1.area();
	cout<<endl;
	cout<<"area of 2nd rectangle is :";
	cout<<r2.area();
	cout<<endl;
	  return 0;
	}


