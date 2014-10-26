//
//Because CBird has some feature that the bird like ostrich can't have,
//so it may not be reasonable to creat a COstrich by deriving from CBird.
//
//
//
//
//

class CBird
{
protected:
    int wingSpan(0);
    int eggSize(0);
/*    int airSpeed(0);
    int altitude(0);
public:
    virtual void fly()
    {
        altitude=100;
    }
 */
};

class CHawk:CBird
{
private:
    int airSpeed=0;
    int altitude=0;
public:
    void fly()
    {
        altitude=100;
        airSpeed=100;
        
    }
    
};

class COstrich:CBird
{
private:
    int earthSpeed=0;
public:
    void run()
    {
        earthSpeed=100;
    }
};


