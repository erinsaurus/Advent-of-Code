    
# Day 2 Part 2 of Advent of Code 2018
# Inventory Management System
# What IDs differ by 1 character at the same position in both strings?

from collections import Counter

data = open('input.txt', 'r')
boxIDs = data.read().strip().splitlines()
data.close()

# tracking counts
count = [0, 0]

for i in boxIDs:
        for j in boxIDs:
            diffs = 0
            for idx, ch in enumerate(i):
                if ch != j[idx]:
                    diffs += 1
            if diffs == 1:
                ans = [ch for idx, ch in enumerate(i) if j[idx] == ch]
                print("Part Two:", ''.join(ans))
