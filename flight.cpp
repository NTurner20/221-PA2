/*
	name Nick Turner
	section 507
	assignment PA2
	file 
*/

#include "flight.h" 
Flight::Flight()
{

}

Flight::Flight(std::string fn, std::string dest, std::string dt, std::string gn)
{
	flightNum = fn;
	destination = dest;
	departureTime = dt;
	gateNum = gn;
}

Flight::~Flight()
{
	delete this;
}

bool compareToDestination(Flight f1, Flight f2)
{
	if (f1.destination == f2.destination) { return true; }
	else { return false; }
}

bool compareToDepartureTime(Flight f1, Flight f2)
{
	if (f1.departureTime == f2.departureTime) { return true; }
	else { return false; }
}

std::istream & operator>>(std::istream & in, Flight & F)
{
	in >> F.flightNum >> F.destination >> F.departureTime >> F.gateNum;
	return in;
}
