class Animal
{
    public:
    virtual void Voice();
};

class Dog : public Animal 
{
    public: 
    void Voice() override;
};

class Cat : public Animal 
{
    public: 
    void Voice() override;
};

class Rabbit : public Animal 
{
    public: 
    void Voice() override;
};