% Trapezoidal Method

%1) find the area bounded by the curve y=x^2,x-axis,x=0and x=2 using
%trapezoidal rule in matlab


f=@(x) x.^2

f =

  function_handle with value:

    @(x)x.^2

a=0;
b=2;
n=1000;
h=(b-a)/n;
x=a:h:b;
y=f(x);
area=(h/2)*(y(1)+2*sum(y(2:end-1))+y(end));
fprintf("The approximate area under the curve is : %.4f\n",area);
The approximate area under the curve is : 2.6667



