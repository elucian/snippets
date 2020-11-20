# data source (fixture)
source = [1,2,2,3,3,4,4,5,5]

# classic notation
unique = set([1,2,2,3,3,4,4,5,5]);
print("unique=",unique) # {1, 2, 3, 4, 5}

# list comprehension
build  = [ x**2 for x in unique] 
print("build=",build) # [1,4,9,16,25]

# Filtering elements
even  = [ x for x in unique if (x % 2 == 0) ]
print("even=",even) # [2,4]

# set comprehension
newset = { x for x in source }
print("newset=",newset)

# dictionary comprehension
newdic = { x : x**2 for x in source }
print("newdic=",newdic) # {1:1,2:4,3:9,4:16,5:25]
