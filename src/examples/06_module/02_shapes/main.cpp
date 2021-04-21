//main
#include <iostream>
#include<memory>
#include<utility>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique;

int main() 
{	
	const int SIZE=3;
	Circle circles[SIZE];
	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Shape* shapes = new Circle[3];
	shapes[0].draw();
	shapes[1].draw();
	shapes[2].draw();

	delete[] shapes;
	std::cout<<"pointer to pointers\n";
	//work with circles and lines
	Shape** shapes1 = new Shape*[3];//pointer list
	shapes1[0] = new Circle();
	shapes1[1] = new Line();
	shapes1[2] = new Line();

	shapes1[0]->draw();
	shapes1[1]->draw();
	shapes1[2]->draw();








/*	unique_ptr<Shape> circle = make_unique<Circle>();
	circle->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	line->draw();

	std::vector<unique_ptr<Shape>> shapes;

	shapes.push_back(std::move(circle));
	shapes.push_back(std::move(line));

	for(auto& shape: shapes)
	{
		shape->draw();
	}*/

	return 0;
}