# Secure Code Generation
You are to implement a function that generates a secure code from three integer inputs using a specific two-stage exponentiation formula.

Inputs
```
s (int): The secretCode.

m (int): The firstKey.

n (int): The secondKey.
```

## Formula: 
The final code must be generated using the following formula, where the firstKey is used in the first exponentiation and the secondKey in the second.

```
final_code=(((s^m)(%10))^ n  (%1000000007)
```
Example
Given Inputs: s = 2, m = 3, n = 4

Expected Output: 4096