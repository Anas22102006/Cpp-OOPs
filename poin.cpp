#include <bits/stdc++.h>
using namespace std;
class Point{
    public:
    double x,y;
    Point(double x,double y){
        this->x = x;
        this->y = y;
    }

};
double Dist(Point a, Point b){
        double xd = (a.x-b.x)*(a.x-b.x);
        double yd = (a.y-b.y)*(a.y-b.y);
        double dist = pow(xd+yd,0.5);
        return dist;
}
int main(){
    Point a(1.5,1.4);
    Point b(7.3,2.4);
    cout << Dist(a,b) << endl;
    return 0;
} 