#include <vector>
#include <time.h>
#include "coordinate.h"

using namespace std;

class ProblemInstance {

private:

	vector <Coordinate> data;
	double dataTreshold;
	int consensusTreshold;
	int trials;
	int minimumCoordinates;

public:

    ProblemInstance(vector<Coordinate> data, int dataTreshold, int consensusTreshold, int trials, int minimumCoordinates);
	void execute();
	vector<Coordinate> getData();
	double getDataTreshold();
	int getConsensusTreshold();
	int getTrials();

};