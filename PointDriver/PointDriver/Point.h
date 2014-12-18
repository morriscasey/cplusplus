//Point.h
//defines interface for new type

class Point
{
public:
	//Operations or functions in new type
	
	//Constructor function- allow us to initialize
	// always the same name as the class
	Point(double initial_x, double initial_y);
	Point();

	//Mutator Functions - allow to change private data
	void set_x_coordinate(double new_x);
	void set_y_coordinate(double new_y);

	//Accessor Functions
	//alows us to view/inspect the private data
	double get_x();
	double get_y();

private:
	//The data in the new type
	double x;
	double y;

};