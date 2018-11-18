	/*
	3.Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
	*/

	#include<iostream>
	using namespace std;

	/*
	1.create the class rectangles..
	2.declare the perimeters len..bre..hei..as double type 
	3.then declare the functions area and perimeter in the class
	4.to learn more define the AREA FUNCTION IN CLASS ITSELF BUT PERIMETER OUTSIDE THE FUNCTION..
	5.go to driver function and declare the objects rect1 and rect2 ..
	6. ASSIGN values to the parameters len..bre..hei..GET FROM THE USER..
	7. then print the values of volume and the perimeter...done dana dan dan

	8 at last compare the values of areas and perimeter...

	*/

	//class NOTE:DONOT FOORGET THE SEMICOLON
	class rectangle
	{
	public:

		double length;
		double breadth;
	
		 
		 double area(void)
			{	
			  return length*breadth;
			}

		 double perimeter(void);

	};

	double rectangle::perimeter(void){
	return 2*(length+breadth);
	}

	//driver function

	int main()
	{	rectangle rect1;
		rectangle rect2;


		double l,b;
		cout<<"Sir,please enter the length of rectangle1:"<<endl;
		cin>>l;
		cout<<"Sir,please enter the breadth of rectangle1:"<<endl;
		cin>>b;
	
		rect1.length=l;
		rect1.breadth=b;
		//area
		double a1=rect1.area();
		//perimeter
		double p1=rect1.perimeter();
	
		cout<<"area1="<<a1<<endl;
		cout<<"perimeter1="<<p1<<endl;
		cout<<"HEY!!"<<endl;

		cout<<"Sir,please enter the length of rectangle2:"<<endl;
		cin>>l;
		cout<<"Sir,please enter the breadth of rectangle2:"<<endl;
		cin>>b;
	
		rect2.length=l;
		rect2.breadth=b;
		//area
		double a2=rect2.area();
		//perimeter	
		double p2=rect2.perimeter();

	
		cout<<"area2="<<a2<<endl;
		cout<<"perimeter2="<<p2<<endl;

	//comparing the values

	if(a1>a2){
	cout<<"area of 1st rectangle is more than that of 2nd."<<endl;
	}
	else if(a1==a2){
	cout<<"area of 1st rectangle is equal to area of 2nd rectangle"<<endl;}
	else{
	cout<<" area of 1st rectangle is less than that of 2nd."<<endl;
	}

	if(p1>p2){
	cout<<"area of 1st rectangle is more than that of 2nd."<<endl;
	}
	else if(p1==p2){
	cout<<"perimeter of 1st rectangle is equal to perimeter of 2nd rectangle"<<endl;}
	else{
	cout<<" area of 1st rectangle is less than that of 2nd."<<endl;
	}

	return 0;
	}

	
	
	
	

	
	
