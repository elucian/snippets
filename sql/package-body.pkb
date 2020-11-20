create or replace package body HelloWorld as

function say_hello return varchar2 is
begin
   return "Hello World";
end say_hello;

procedure hello is
begin
   DBMS_OUTPUT.put_line("Hello World");
end;

end HelloWorld;
/
