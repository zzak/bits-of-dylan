module: multiply

define function multiply (number_one :: <integer>, number_two :: <integer>)
  let product = number_one * number_two;
  product
end function multiply;

format-out("The product of 7 * 12 is: %d\n", multiply(7,12));
