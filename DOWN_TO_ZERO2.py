#!/bin/python3
# You are given  queries. Each query consists of a single number . You can perform any of the  operations on  in each move:

# 1: If we take 2 integers  and  where , , then we can change 

# 2: Decrease the value of  by .

# Determine the minimum number of moves required to reduce the value of  to .

# Input Format

# The first line contains the integer .
# The next  lines each contain an integer, .

# Constraints



# Output Format

# Output  lines. Each line containing the minimum number of moves required to reduce the value of  to .

# Sample Input

# 2
# 3
# 4
# Sample Output

# 3
# 3
# Explanation

# For test case 1, We only have one option that gives the minimum number of moves.
# Follow  ->  ->  -> . Hence,  moves.

# For the case 2, we can either go  ->  ->  ->  ->  or  ->  ->  -> . The 2nd option is more optimal. Hence,  moves.

import math
import os
import random
import re
import sys

#
# Complete the 'downToZero' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.

def downToZero(n):
    # Write your code here
    ops = 0
    vals = [n]
    while True:
        newVals = []
        for val in vals:
            if val <= 3:
                return ops + val
            divisors = maxDivisors(val)
            if divisors != []:
                for div in divisors:
                    newVals.append(div)
            newVals.append(val - 1)
        ops += 1
        vals = sorted(list(set(newVals)))
        
def maxDivisors(n):
    div = int(math.sqrt(n))
    divisors = []
    while div >= 2:
        if n % div == 0:
            divisors.append(int(n/div))
        div -= 1
    
    return divisors

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        result = downToZero(n)

        fptr.write(str(result) + '\n')

    fptr.close()
