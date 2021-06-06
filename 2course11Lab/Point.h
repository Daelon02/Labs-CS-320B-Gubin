# include <iostream>;
using namespace std;


class POINT {
public:
    int x;
    int y;
    POINT();
    POINT(int x, int y);
    POINT(POINT& in);
    void SetXY(int X, int Y);
    void SumAndProd(int& sum, int& prod);
    void Output();
};
