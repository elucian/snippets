# define large namespace
def scope_test():
    # local scope
    def do_local():
        spam = "local spam"
    pass # end do_local

    def do_nonlocal():
        nonlocal spam
        spam = "nonlocal spam"
    pass # end do_nonlocal

    def do_global():
        global spam
        spam = "global spam"
    pass # end do_global

    # nack to namespace
    spam = "test spam"
    do_local()
    print("After local assignment:", spam)
    do_nonlocal()
    print("After nonlocal assignment:", spam)
    do_global()
    print("After global assignment:", spam)
pass # end scope_test

# back to global scope
scope_test() # test function with no result
print("In global scope:", spam) 
