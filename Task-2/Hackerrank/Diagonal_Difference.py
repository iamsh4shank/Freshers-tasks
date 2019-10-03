#Diagonal difference

import sys


N = int(raw_input())
difference = 0
for i in range(N):
    row = raw_input().split()
    difference += (int(row[i]) - int(row[N-1-i]))
print abs(difference)
