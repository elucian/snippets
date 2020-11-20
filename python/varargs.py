#last parameter is optional
def add(a, b, c = 0, *d): 
   return a+b+c+sum(d)

print( add(1,2) )   # 3
print( add(1,2,3) ) # 6
print( add(1,2,c = 3) ) # 6
print( add(1,2,3, 4, 5) )# 15
