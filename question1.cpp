#include <iostream>
#include <vector>


//Pseudocode
// FUNCTION isTriangular(n)
//     IF n < 1 THEN
//         RETURN false
//     ENDIF
//     FOR i = 1 TO n DO
//         n = n - i
//         IF n < 0 THEN
//             RETURN false
//         ELSE IF n == 0 THEN
//             RETURN true
//         ENDIF
//     ENDFOR
// ENDFUNCTION

// FUNCTION main()
//     DECLARE arr = [1, 23, 6, 110, 15, 21, 28, 35, 45, 55]
//     FOR EACH num IN arr DO
//         IF isTriangular(num) THEN
//             PRINT num "is a triangular number."
//         ELSE
//             PRINT num "is not a triangular number."
//         ENDIF
//     ENDFOR
// ENDFUNCTION
// CALL main()

bool isTriangular(int n) {
    if (n < 1)
        return false;
    for (int i = 1; n > 0; i++)
        n -= i;
    return n == 0;
}

int main() {
    std::vector<int> arr = {1, 23, 6, 110, 15, 21, 28, 35, 45, 55}; // replace with your array
    for (int num : arr) {
        if (isTriangular(num))
            std::cout << num << " is a triangular number.\n";
        else
            std::cout << num << " is not a triangular number.\n";
    }
    return 0;
}


// Justification
// Time Complexity best case: O(1) with n is number of triangular numbers
// Time Complexity worst case: O(n) with n is number of triangular numbers
// Time Complexity average case: O(n) with n is number of triangular numbers