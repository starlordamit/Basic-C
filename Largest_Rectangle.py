#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'largestRectangle' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER_ARRAY h as parameter.
#

def largestRectangle(h):
    stack = [0]
    S = 0
    maxS = 0
    h.append(0)
    for i in range(1, len(h)):
        
        if h[i] >= h[stack[-1]]:
            stack.append(i)

        else:
            while stack and h[i] < h[stack[-1]]:
                last = stack.pop()
                if stack:
                    S = (i - stack[-1]-1) * h[last]
                else:
                    S = i * h[last]
                if  S > maxS:
                    maxS = S
            stack.append(i)
    
    return maxS

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    h = list(map(int, input().rstrip().split()))

    result = largestRectangle(h)

    fptr.write(str(result) + '\n')

    fptr.close()
