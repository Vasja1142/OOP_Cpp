
#include <iostream>
#include "Vector.h"

int main()
{
    Vector <int> nums(4, 0);
    Vector <int> nums2(4, 1);
    const int a = 2;
    nums2 = nums2 * nums;
    cin >> nums2 >> nums2 >> nums2 >> nums2;
}
