# define a class
class Dog(object):
    kind = "canine" # class variable
    def __init__(self, name):
        self.name = name #instance variable
        self.tricks = [] #instance variable
    def add_trick(self, trick):
        self.tricks.append(trick)

# instance of a class
e = Dog('Buddy') #first instance
d = Dog('Fido')  #second instance

# call methods using objects e and d
x = object();

e.add_trick('roll over') 
d.add_trick('play dead') 

# access public property "tricks"
print(e.name, e.tricks) 
print(d.name, d.tricks)
