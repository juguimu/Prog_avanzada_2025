classdef ProgA

    properties
        datos
        nombres
       
    end    

    methods
        function obj=ProgA(M,N)
            obj.nombres=[obj.nombres N];
            obj.datos=[obj.datos M(:,1)];
            obj.datos=[obj.datos M(:,2)];
            obj.datos=[obj.datos (M(:,1)+M(:,2))./2];
        end    

        function mostrar(obj)
            for i=1:length(obj.nombres)
                fprintf('|%10s| %2.1f| %2.1f|%2.1f| \n', ...
                obj.nombres{i}, ...
                obj.datos(i,1), ...
                obj.datos(i,2), ...
                obj.datos(i,3))
            end
        end
        function obj=eliminar(obj,nom)
            for i=1:length(obj.nombres)
                if(strcmp(nom,obj.nombres{i}))
                    obj.nombres(i)=[];
                    obj.datos(i,:)=[];
                    break
                end    
            end    
        end    
    end    
end    