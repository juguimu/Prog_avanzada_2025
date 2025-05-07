clc
clear

objOper=Operaciones(3,4);

[suma,resta]=objOper.sumaresta;

disp(['la suma es: ', ...
       num2str(suma)])
disp(['la resta es: ',num2str(resta)])

objOper.modificar(4,4);
[suma,resta]=objOper.sumaresta;

disp(['la suma es: ', ...
       num2str(suma)])
disp(['la resta es: ',num2str(resta)])


