class Animal
{
    public:
    virtual ~Animal();
    virtual void Voice();
};

class Dog : public Animal 
{
    public: 
    virtual ~Dog();
    void Voice() override;
};

class Cat : public Animal 
{
    public: 
    virtual ~Cat();
    void Voice() override;
};

class Rabbit : public Animal 
{
    public: 
    virtual ~Rabbit();
    void Voice() override;
};