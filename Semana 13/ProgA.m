classdef ProgA

    properties
        estudiantes=[]
        nota1=[]
        nota2=[]
        notaFinal=[]
    end    

    methods
        function obj=ProgA(estudiante,nota1,nota2)
            obj.estudiantes=estudiante;
            obj.nota1=nota1;
            obj.nota2=nota2;
            obj.notaFinal=(nota1+nota2)/2;
        end    

        function mostrar(obj)
            for i=1:length(obj.estudiantes)
                fprintf('|%10s| %2.1f| %2.1f|%2.1f| \n', ...
                obj.estudiantes{i}, ...
                obj.nota1(i), ...
                obj.nota2(i), ...
                obj.notaFinal(i))
            end
        end    


    end    

end    