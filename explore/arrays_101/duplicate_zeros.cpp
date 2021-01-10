class Solution {
public:
    void duplicateZeros(vector<int>& A) {
        /*
            - Explanation
                Basically, we apply two pointers.
                i is the position in the original array,
                j is the position in the new array.
                (the original and the new are actually the same array.)

                The first we pass forward and count the zeros.
                The second we pass backward and assign the value from original input to the new array.
                so that the original value won't be overridden too early.

            - Example
                Input: [1,0,2,3,0,4,5,0]
                n: 8
                j: 8 + 3 = 11
                Output: [1,0,0,2,3,0,0,4]

            - memo
                std::vector::size
                -> Returns the number of elements of the container.

                std::vector::begin
                -> Returns the iterator that points to the first element

                std::vector::end
                -> Returns the iterator to the element following the last element of the vector.

                std::count
                -> Returns the number of elements in the range [first,last) that compare equal to val.
        */
        
        int n = A.size(), j = n + count(A.begin(), A.end(), 0);
        for (int i = n - 1; i >= 0; --i) {
            if (--j < n)
                A[j] = A[i];
            if (A[i] == 0 && --j < n)
                A[j] = 0;
        }
    }
};
