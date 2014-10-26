#include"DAVID.h"

int main()
{
    DAVID Box1(2,3,4);
    DAVID Box2;

    
	Box2.SetHeight(3);
	Box2.SetLength(4);
	Box2.SetWidth(5);
    cout<<Box1.Volume()<<endl;
    cout<<Box2.Volume()<<endl;
	return 0;
}