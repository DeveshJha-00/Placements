# QUESTION 1

A company has a sales record of N products for M days. The company wishes to know the maximum revenue received from a given product of the N products each day. Write an algorithm to find the highest revenue received each day.

## Input
The first line of the input consists of two space-separated integers-days and products, representing the days (M) and the products in the sales record (N), respectively.
The next M lines consist of N space-separated integers - sales_record, representing the end of sales revenue (can be positive or negative) received from each product each day.

## Output
Print M space-separated integers representing the maximum revenue received each day.

## Example
### Input:
3 4
100 200 300 400
400 300 200 100
200 400 600 800
### Output:
400 400 800

----------------------------------------------------------------------------------------------------------------

# QUESTION 2

In an online word recognition game for kids, the user needs to find the number of times the given word occurs in the sentence. Both the given word and the sentence displayed on the user interface consist of letters from the English alphabet only and are case insensitive (i.e., "toddler" is same as "Toddler"). Neither the word nor the sentence contain any white-spaces or special symbols.

Write an algorithm to print the number of times the given word appears in the sentence.

## Input
The first line of the input consists of a string - sentence, representing the sentence on the user interface.
The second line consists of a string - word, representing the given word.

## Output
Print an integer representing the number of times the given word appears in the sentence. If no occurrence of the word is found in the sentence, then print 0.

## Note
Overlapping instances of the word may appear in the sentence.

## Example
### Input:
TodisplayinginthehouseofTodwiththeTod
Tod
### Output:
4
### Explanation:
The word "Tod" occurs 4 times in the given sentence, so the output is 4.