class Solution {
public:
    int divide(int dividend, int divisor) {

         if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

       bool negative = (dividend < 0 ) != ( divisor < 0);

       long long a = dividend ;
       long long b = divisor ;
    
        a = abs(a);
        b = abs(b);
        long long quotient = 0;
       while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Double divisor while it still fits
            while (a >= temp + temp) {
                temp = temp + temp;
                multiple = multiple + multiple;
            }

            a = a - temp;
            quotient = quotient + multiple;
        }

        if (negative) {
            quotient = -quotient;
        }
        return (int) quotient ;

       
        
    }
};