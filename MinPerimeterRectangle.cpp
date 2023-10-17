/*An integer N is given, representing the area of some rectangle.

The area of a rectangle whose sides are of length A and B is A * B, and the perimeter is 2 * (A + B).

The goal is to find the minimal perimeter of any rectangle whose area equals N. The sides of this rectangle should be only integers.
For example, given integer N = 30, rectangles of area 30 are:

(1, 30), with a perimeter of 62,
(2, 15), with a perimeter of 34,
(3, 10), with a perimeter of 26,
(5, 6), with a perimeter of 22.
For example, given an integer N = 30, the function should return 22, as explained above */

int MinPerimeterRectangle(int N) {
    // Implement your solution here
    if(N == 1) return 4;
    int d = 0;
    for(int i = 1;i<=N/2;i++){
        if(N%i == 0){
            if(N/i < i) break;
            d = i;
        }
    }
    return 2*(d+(N/d));
}

/* 5 is the largest on after which the repetion of factors starts so find it and take that factors to return the smallest parameter*/

/* got 90%  */
