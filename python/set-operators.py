# create a set with initial value
a = {1,2,3}

# check if element is in set
print(3 in a) # True

# append new elements
a.add(4) # new element
a.add(3) # existing element

print(a) # {1,2,3,4}

b = a | {4,5,6} # union
c = a & {1,2,7,8} # intersect

print(b) # {1,2,3,4,5,6}
print(c) # {1,2}

# remove elements
a.discard(4);
print(a) # {1,2,3}
