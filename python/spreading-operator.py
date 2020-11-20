# function with variable arguments
def test(*params):
  print(params)

# spreading a list into arguments
args = [1,2,3] 
test(args)  # unexpected: ([1,2,3],)  
test(*args) # expected:   (1,2,3)  

# use spreading to form new list
new = [0,*args,4,5]
print(new)  # [0,1,2,3,4,5]
print(*new,sep = ";") # 0;1;2;3;4;5
