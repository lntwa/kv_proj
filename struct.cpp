//структуры это как классы, структуры описывают реальные объекты, для этого используется слово struct

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <stdexcept>
#include <chrono>
#include <thread>
#include <unistd.h>

using namespace std;

struct Phone
{
	string brand;
};
 
Phone a;
Phone *p = &a;

int main(int argc, char const *argv[])
{
	// Phone phn;
	cin >> p -> brand;
	cout << p  << endl;
	return 0;
}
