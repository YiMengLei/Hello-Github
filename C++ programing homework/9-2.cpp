
//
//Because CBird has some feature that the bird like ostrich can't have,
//so it may not be reasonable to creat a COstrich by deriving from CBird.
//
//
//
//
//

#include <iostream>
using namespace std;

class CBird
{
protected:
	int wingSpan  ;
    int eggSize ;
    /*    int airSpeed(0);
     int altitude(0);
     public:
     virtual void fly()
     {
     altitude=100;
     }
     */
	
public:
	virtual void layegg(int a)
	{
		eggSize=a;
	}
};

class CFlybird:public CBird
{
private:
    int airSpeed;
    int altitude;
public:
    void fly()
    {
		airSpeed=50;
        altitude=100;
        airSpeed=100;
        wingSpan=50;
        cout<<"HAWK:"<<endl
            <<"wingSpan="<<wingSpan<<endl
            <<"eggSize="<<eggSize<<endl
            <<"airSpeed="<<airSpeed<<endl
            <<"altitude="<<altitude<<endl;
    }
    
};

class CRunbird:public CBird
{
private:
    int earthSpeed;
public:
    void run()
    {
        earthSpeed=100;
        wingSpan=50;
        cout<<"OSTRICH:"<<endl
        <<"wingSpan="<<wingSpan<<endl
        <<"eggSize="<<eggSize<<endl
        <<"airSpeed="<<earthSpeed<<endl;
    }
	/*void layegg(int a)
	{
		eggSize=a;
	}*/
};

int main()
{
    CFlybird Hawk;
    CRunbird Ostrich;
	Hawk.layegg(20);
	Ostrich.layegg(60);
    Hawk.fly();cout<<endl;
    Ostrich.run();
	return 0;
}

