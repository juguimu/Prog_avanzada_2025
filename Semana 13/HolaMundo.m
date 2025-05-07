classdef HolaMundo < handle
    properties
        nombre='Juan' 
    end    
    methods
        function saludar(obj)
            disp(['Hola Mundo ',obj.nombre])
        end    
    end    
end    