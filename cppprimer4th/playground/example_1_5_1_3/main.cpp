/**
 * Source: Example 1.5.1
 *         3. add two Sales_item instances
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    
    Sales_item item1, item2;
    
    std::cin >> item1 >> item2;
    
    std::cout << item1 + item2 << std::endl;
    
    return 0;
}