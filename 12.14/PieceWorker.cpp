#include <iostream>
#include "PieceWorker.h"
using namespace std;


PieceWorker::PieceWorker(const string& firstName, const string& lastName, const string& ssn, 
double wagePerPiece, int numPieces):Employee(firstName, lastName, ssn), wage(wagePerPiece), pieces(numPieces) {}

double PieceWorker::earnings() const {
        return wage * pieces;
}

string PieceWorker::toString() const {
        return Employee::toString() + "\nPieceWorker: " + to_string(pieces) + " pieces at $" + to_string(wage) + " per piece";
}
