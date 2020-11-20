declare
  -- cursor declaration
  cursor c_persons is
    select name, salary 
      from employees
     where salary > 10000;

  -- variable declaration
  v_name   varchar2(100);
  v_salary number;
begin
  open c_persons;
  loop
    fetch c_persons into v_name, v_salary;
    exit when c_persons#notfound; 
    dbms_output.put_line(v_name||","||to_char(salary));
  end loop;
  close c_persons;
end;
