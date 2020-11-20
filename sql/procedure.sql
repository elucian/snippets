create or replace
procedure get_price (quantity NUMBER, value NUMBER) is
  error_message VARCHAR2(30) := 'Quantity cant be zero.';
  price number;
begin
  price:= value/quantity;
  DBMS_OUTPUT.PUT_LINE(price);
exception
  when ZERO_DIVIDE then
    DBMS_OUTPUT.PUT_LINE(error_message);
end get_price;
/
