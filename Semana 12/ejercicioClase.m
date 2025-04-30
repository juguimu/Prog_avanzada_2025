%% Recibir edades
clc
clear

edades=[];
while (true)

    temp=input('ingrese la edad: \n');
    edades=[edades temp];
    f=input('desea finalizar y/n: \n',"s");
    if f=='y'
        break
    end    
end    

mayor=edades(1);
menor=edades(1);
promedio=0;

for i=1:length(edades)
    promedio=promedio+edades(i);
end
promedio=promedio/length(edades);
for i=2:length(edades)
    if(edades(i)>mayor)
        mayor=edades(i);
    end
    if(edades(i)<menor)
        menor=edades(i);
    end
end

disp(['Promedio: ',num2str(promedio)])
disp(['Mayor: ',num2str(mayor)])
disp(['Menor: ',num2str(menor)])