declare 
  v_message varchar2(30);  -- variable length string with maxim capacity 30
  c_code char(10);         -- fixed length string 
  n_index number(5,2);     -- number with two decimals
  d_today date := SYSDATE; -- a date with initial value: today
begin 
  v_message := 'hello world'; -- alter a variable
  DBMS_OUTPTUT.PUT_LINE(v_message); -- print a message
end;
/
