//
//  Product.hpp
//  Hello
//
//  Created by AT Campbell on 8/11/20.
//  Copyright © 2020 AT Campbell. All rights reserved.
//

#pragma once

#include <string>

class Product {
public:
    Product(const std::string name = "Default");
    const std::string GetName();
private:
    const std::string m_Name;
};
