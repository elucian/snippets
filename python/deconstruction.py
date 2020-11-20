#deconstructing a tuple
a, b = (1,2)
#ignoring one member
a,_,c = (1,2,3)
print(a,c) # 1 3

#deconstructing a list
x,y,*z = [1,2,3,4,5]
print(z) # [3,4,5]

#ignore all except first and last
f,*_,w = {1,2,3,4,5}
print (f, w) # 1 5
