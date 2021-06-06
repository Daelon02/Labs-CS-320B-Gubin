# include <iostream>
using namespace std;

struct DETAIL {
	DETAIL* prev = NULL;
	string name;
	string type;
	int quantity;
	float part_weight;
	DETAIL* next = NULL;
};