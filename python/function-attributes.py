# demonstrate attributes attached to a function
def test_attr():
    if not hasattr(test_attr, "counter"):
        test_attr.counter = 0
    else:
        test_attr.counter += 1
    return test_attr.counter
pass # end test_attr

# call function  attributes
def main():
    for i in range(0,10):
        j=test_attr()
        print(i,'->',j)
pass # end main

# compiler entry point
if __name__ == "__main__":
    main()
pass # end if
