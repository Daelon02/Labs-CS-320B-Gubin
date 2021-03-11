#define N 30
 struct Space {
	char sc[15];
	float percent, apprWeight;
	unsigned long long numberOfStars;
}; 
//extern struct Space* ms[N], x;


#ifndef struct_file
#define struct_file
	void struct_filling(Space* ms);
	void outputting(Space* ms, int size);
	void sorting(Space* ms, int size);
#endif