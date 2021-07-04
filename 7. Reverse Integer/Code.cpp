class Solution {
public:
    int reverse(int x) {
        long int reversed_number = 0;
        long int num = x;
        if (x <= -2147483648 or x >=2147483648)
            return 0;
        for (int i = 0; i < abs(num); i++)
            {
                reversed_number = reversed_number * 10 + abs(x) % 10;
                x = abs(x)/10;
                if (abs(x) <= 0)
                {
                    break;
                }
            }
        if (num < 0)
            reversed_number = -1 * reversed_number;
        if (reversed_number > 2147483648 or reversed_number< -2147483648)
            return 0;
        return reversed_number;
    }
};