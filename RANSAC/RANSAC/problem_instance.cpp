#include "problem_instance.h"

using namespace std;

ProblemInstance::ProblemInstance(vector<Coordinate> data, int dataTreshold, int consensusTreshold, int trials, int minimumCoordinates) {
	this->data = data;
	this->dataTreshold = dataTreshold;
	this->consensusTreshold = consensusTreshold;
	this->trials = trials;
	this->minimumCoordinates = minimumCoordinates;
}

void ProblemInstance::execute() {
	vector <Coordinate> selectedData;
	srand((unsigned)time(NULL));
	for(int i = 0; i < this->minimumCoordinates; i++) {
		int dataSize = this->data.size();
		int position = int((double(rand())/RAND_MAX)*dataSize);
		Coordinate selectedCoordinate = data.at(position);
		selectedData.push_back(selectedCoordinate);
	}
}

vector<Coordinate> ProblemInstance::getData() {
	return (this->data);
}

double ProblemInstance::getDataTreshold() {
	return (this->dataTreshold);
}

int ProblemInstance::getConsensusTreshold() {
	return (this->consensusTreshold);
}

int ProblemInstance::getTrials() {
	return (this->trials);
}