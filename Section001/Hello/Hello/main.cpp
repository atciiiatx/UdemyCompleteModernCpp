//
//  main.cpp
//  Hello
//
//  Created by AT Campbell on 8/11/20.
//  Copyright © 2020 AT Campbell. All rights reserved.
//

#include <iostream>
#include "Product.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    auto a = new Product();
    std::cout << "a: " << a->GetName() << std::endl;
    auto b = new Product("Special");
    std::cout << "b: " << b->GetName() << std::endl;
    return 0;
}
