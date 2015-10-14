#include <iostream>
#include "Strategy.h"

void ConcreteStrategyA::operation(){
    std::cout << "Hello Strategy A" << std::endl;
}


void ConcreteStrategyB::operation(){
    std::cout << "Hello Strategy B" << std::endl;
}

void StrategyClient::setStrategy(Strategy *s){
    strategy = s;
}

void StrategyClient::performOperation(){
    strategy->operation();
}
