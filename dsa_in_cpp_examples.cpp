#include <algorithm>
#include <iostream>
#include <vector>

// Example of a simple data structure: Stack
class Stack
{
private:
    std::vector<int> elements;

public:
    void push(int element)
    {
        elements.push_back(element);
    }

    void pop()
    {
        if (!elements.empty())
        {
            elements.pop_back();
        }
    }

    int top()
    {
        return elements.back();
    }

    bool isEmpty()
    {
        return elements.empty();
    }
};

// Example of a simple algorithm: Binary Search
int binarySearch(const std::vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Target found
        }
        if (arr[mid] < target)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main()
{
    // Stack example
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Top element: " << stack.top() << std::endl; // Output: 3
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl; // Output: 2

    // Binary Search example
    std::vector<int> sortedArray = {1, 2, 3, 4, 5};
    int target = 3;
    int result = binarySearch(sortedArray, target);
    if (result != -1)
    {
        std::cout << "Element found at index: " << result << std::endl; // Output: 2
    }
    else
    {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
