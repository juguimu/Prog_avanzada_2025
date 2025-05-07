classdef Operaciones < handle
    properties
        A,B
    end    
    
    methods
        function obj=Operaciones(A,B)
            obj.A=A;
            obj.B=B;
        end   
        function [Suma,Resta]=sumaresta(obj)
            Suma=obj.A+obj.B;
            Resta=obj.A-obj.B;
        end    

        function obj=modificar(obj,A,B)
            obj.A=A;
            obj.B=B;
        end    
    end    
end    