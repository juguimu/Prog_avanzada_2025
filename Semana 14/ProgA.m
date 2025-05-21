classdef ProgA

    properties
        datos
       
    end    

    methods
        function obj=ProgA(M)
            obj.datos=[obj.datos;M];
            [r,c]=size(obj.datos);
            for i=1:length(r)
                obj.datos{i,4}=(M{i,2}+M{i,3})/2;
            end
        end    

        function mostrar(obj)
            [r,c]=size(obj.datos);
            for i=1:length(r)+1
                fprintf('|%10s| %2.1f| %2.1f|%2.1f| \n', ...
                obj.datos{i,1}, ...
                obj.datos{i,2}, ...
                obj.datos{i,3}, ...
                obj.datos{i,4})
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