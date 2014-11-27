#ifndef _POSITION_
#define _POSITION_

class Position
{
 private:
  int x;
  int y;

 public:
 Position(int x=0, int y=0) : x(x), y(y){}
  void setx(int a){ x=a; }
  void sety(int b){ y=b; }
  int getx(){ return x; }
  int gety(){ return y; }

};

#endif
