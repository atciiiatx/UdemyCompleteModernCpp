//
//  Product.cpp
//  Hello
//
//  Created by AT Campbell on 8/11/20.
//  Copyright © 2020 AT Campbell. All rights reserved.
//

#include "Product.hpp"

Product::Product(const std::string name):
    m_Name(name){
}

const std::string Product::GetName() {
    return m_Name;
}
