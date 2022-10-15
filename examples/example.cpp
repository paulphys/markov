#include <iostream>
#include "Markov.hpp"

auto main() -> int {

    Markov::Chain chain(1);
    
    chain.add("hello");
    chain.add("this is a");
    chain.add("simple markov chain");

    Markov::Ngram currentState = {"markov"};
    Markov::NextState ns("$"); 

    std::cout << chain.transitionProbability(ns,currentState) << "\n"; // Printing 1
    
    return 1;
}
