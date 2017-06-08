//
//  main.cpp
//  GitUseExample
//
//  Created by Madelyn Payne on 6/8/17.
//  Copyright © 2017 Madelyn Payne. All rights reserved.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<char> type_vector;
    int side_length = 4;
    type_vector.reserve(side_length*side_length);
    for(int j = side_length; j > 0; --j)
    {
        for (int i = 0; i < side_length; ++i)
        {
            if( i < side_length/2)
            {
                type_vector.push_back('A');
            }
            else
            {
                type_vector.push_back('B');
            }
        }
    }
    for(int i = 0; i < type_vector.capacity(); ++i)
    {
        std::cout<<type_vector[i]<< ' ';
        if( (i+1)%side_length ==0)
        {
            std::cout<< ' '<<std::endl;
        }
    }
    return 0;
}
