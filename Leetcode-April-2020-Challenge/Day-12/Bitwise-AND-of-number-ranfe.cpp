/* Rules: 
1) If two numbers are equal, no numbers will be between them. 
2) If Two numbers are not Equal, The consecutive number between them will 
contain ZERO at each digit, thus their bitwise AND will be ZERO.

Algorithm:

1) Each division by two means remove a binary digit from the right of the numbers. 
(This is how division by two means in binary). 

2) Each time we divide, we increase the step variable. 

When we do a '&' of a range of number in the resulting answer if a bit is 0 
that means that bit was 0 once. so we can right shift each bit until the point
 both value are not same .When both value are same then left shift the total 
 number of bits that were different*/



class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int s = 0;
        while(m!=n){
            m=m>>1; //dividing with 2(m=m/2)
            n=n>>1; //n=n/2
            s++;
        }
        return n<<s;//multiplyting n with the 2^s;
    }
};