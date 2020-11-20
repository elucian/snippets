# define a dictionary 
dic = {"a":1, "b":2} 
# following expressions are true 
if dic["a"] == 1: print("True") # True 
if dic["b"] == 2: print("True") # True 

# you can add elements using key assign
dic["c"] = 4
print(dic) # {"a":1, "b":2, "c":4}

# you can add elements using update()
dic.update(a = 0)
dic.update(d = 5)
dic.update(e = 6, f = 7)
dic.update({"g":8,"h":9})
print(dic)

# you can remove element using pop() or del
dic.pop("b")
del dic["g"]
