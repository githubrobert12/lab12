#include <iostream>

using namespace std;


class CVector {
 public:
 int x,y;
 CVector () {};
 CVector (int a,int b){
 x = a;
 y = b;
};

 CVector operator + (CVector param) {
 CVector temp;
 temp.x = x + param.x;
 temp.y = y + param.y;
 return (temp);
};


  CVector operator = (const CVector& param)
{
 x=param.x;
 y=param.y;
 return *this;
}
};





int main () {
 CVector a (4,1);
 CVector b (1,2);
 CVector c;
 CVector d;
 c = a + b;
 d = a;
 cout << c.x << "," << c.y<<endl;
 cout << d.x << "," << d.y<<endl;
 return 0;
}





