# Day 2 of Advent of Code 2018
# Inventory Management System
# What is the checksum of the list of box IDs?

from collections import Counter

data = open('input.txt', 'r')
boxIDs = data.read().strip().splitlines()
data.close()

# tracking counts
count = [0, 0]

for i in boxIDs:
    search = [j for i, j in Counter(i).most_common()]
    if 3 in search:
        count[0] += 1
    if 2 in search:
        count[1] += 1
count

solution = (count[0] * count[1])
print (solution)
