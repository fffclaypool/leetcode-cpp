class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*
        - memo
            auto
            -> The auto keyword specifies that the type of the variable that is being declared 
               will be automatically deducted from its initializer.
               
            std::max
            -> Returns the largest of a and b. If both are equivalent, a is returned.
               default (1) template <class T> const T& max (const T& a, const T& b);
            
            function template
            -> A function template defines a family of functions.
               Syntax: template < parameter-list > function-declaration
               
            class T
            -> we have used T as the template parameter name instead of myType because it is
               shorter and in fact is a very common template parameter name. But you can use
               any identifier you like. 
            
            const
            -> We use the keyword const to make program elements constant. Constant is something
               that doesn't change. 
              
            &
            -> If you use & in the left-hand side of a variable declaration, it means that you
               expect to have a reference to the declared type.
            -> When using it on the right-hand side of a variable, it's also known as the 
               "address-of operator". It'll return its address in the memory instead of the
               variable's value itself. 
        */  
        int max_cnt = 0, cnt = 0;
        for (auto n : nums) {
            if (n == 1) max_cnt = max(++cnt, max_cnt);
            else cnt = 0;
        }
        return max_cnt;
    }
};