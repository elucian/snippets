create or replace package HelloWorld as  
------------------------------------
-- a function can return one result
------------------------------------
function say_hello return varchar2;

------------------------------------
-- a procedure perform an action
-- a procedure do not have results
------------------------------------
procedure hello;

end HelloWorld;
/
