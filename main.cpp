// Started at 11:25 5-14-2022

// Section 11
// Recursion - Fibonacci

#include <iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) 
        return n;       // base cases
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

int main() {
    cout << fibonacci(5) << endl;   // 5
    cout << fibonacci(30) << endl;   // 832040
    cout << fibonacci(40) << endl;   // 1023341554
    return 0;
}


// Section 11
// Recursion - Factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
    if (n == 1) 
        return 1;       // base cases
    return n * factorial(n-1); // recursion
}

int main() {
    cout << factorial(3) << endl;   // 6
//    cout << factorial(8) << endl;   // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;  // 2432902008176640000
    return 0;
}


////////////////////////////////////
// Coding exercise

#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int n, double amount = 0.01);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated() {
    
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION CALL BELOW THIS LINE----

    double total_amount = a_penny_doubled_everyday(25);
    
//----WRITE THE FUNCTION CALL ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int n, double amount) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    function_activation_count++;
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    
    if (n <= 1) 
        return amount;
    return a_penny_doubled_everyday(--n, amount * 2);
    
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int test_function_activation_count() {
    return function_activation_count;
}

// Ended at 1:33 5-14-2022
