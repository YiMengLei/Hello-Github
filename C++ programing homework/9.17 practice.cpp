#include <iostream>
#include <cstring>
using namespace std;
class CBox
{
public:
    double m_Length;
    double m_width;
    double m_height;
    CBox(double lv,double lw,double lh)
    {
        cout<<"kwcgw";
        m_Length=lv;
        m_width=lw;
        m_height=lh;
    }
    CBox()
    {
        cout<<"kwcgldsvshoiehvoidhvd";
    }
    double Volume()
    {
        return m_height*m_Length*m_width;
    }
};

/*double CBox::Volume()
 {
    return m_height*m_Length*m_width;
 }
 */

int main()
{
    CBox Box1(2,3,4);
    CBox Box2;
    struct BOOK
    {
        char Title[80];
        char Author[80];
        char Publisher[80];
        int Year;
        float Price;
    }Novel;
   
    
    /*Box1.m_height=0;
    Box1.m_Length=2;
    Box1.m_width=4;*/
    cout<<Box1.Volume()<<endl;
    Box2={2,3,4};
    cout<<Box2.Volume()<<endl;
    
    
    
    Novel={"C++ Promer","Stroustrop","Pearson",2006,89.1};
    BOOK * pBook =(nullptr);
    pBook = &Novel;
    (*pBook).Price=45.1;
    pBook->Price=89.1;
    strcpy(Novel.Author,"iciuhiwec");
//    cin.getline(Novel.Author, 80,'\n');
    cout<<"Title="<<pBook->Title<<endl;
    cout<<"Author="<<(*pBook).Author<<endl;
    cout<<"Year="<<pBook->Year<<endl;
    cout<<"Price="<<pBook->Price<<endl;
}