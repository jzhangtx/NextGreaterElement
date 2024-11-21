// NextGreaterElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> GetNextGreaterElement(const std::vector<int>& A)
{
    std::vector<int> v;
    for (size_t i = 0; i < A.size(); ++i)
    {
        int n = -1;
        for (size_t j = i + 1; j < A.size(); ++j)
        {
            if (A[j] > A[i])
            {
                n = A[j];
                break;
            }
        }
        v.push_back(n);
    }

    return v;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers in the array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::vector<int> v = GetNextGreaterElement(vec);
        std::cout << v[0];
        for (auto i = v.cbegin()+1; i != v.cend(); ++i)
            std::cout << ", " << *i;

        std::cout << std::endl;
    }
}
