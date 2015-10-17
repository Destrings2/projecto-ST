#pragma

class Strategy
{
public:
    virtual void operation() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
    void operation();
};

class ConcreteStrategyB : public Strategy
{
public:
    void operation();
};

class StrategyClient
{
    Strategy &strategy;
public:
    void setStrategy(Strategy &s);
    void performOperation();
};