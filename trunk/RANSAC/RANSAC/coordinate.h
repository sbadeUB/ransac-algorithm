class Coordinate {

private:

	double x;
	double y;

public:

	Coordinate(double x, double y);
	Coordinate operator+(Coordinate c);
	Coordinate operator-(Coordinate c);
	double getX();
	double getY();

};