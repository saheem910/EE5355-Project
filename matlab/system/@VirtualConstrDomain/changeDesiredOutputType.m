function obj = changeDesiredOutputType(obj, varargin)
    % Sets the function type of desired outputs
    %
    % Parameters:
    % varargin: name-parameter pairs of input argument.

    des = struct(varargin{:});

    if isfield(des, 'VelocityOutput')       

        n_param = obj.getDesOutputExpr(des.VelocityOutput);
        obj.Param.v = nan(1,n_param);
        warning(['The desired velocity output type has been changed, ',...
            'and the corresponding parameters are set to NaN.']);
        obj.DesVelocityOutput.Type = des.VelocityOutput;
        obj.DesVelocityOutput.NumParam = n_param;
    end

    if isfield(des, 'PositionOutput')

        n_param = obj.getDesOutputExpr(des.PositionOutput);
        n_output = getDimension(obj.ActPositionOutput);
        obj.Param.a = nan(n_output,n_param);
        warning(['The desired position output type has been changed, ',...
            'and the corresponding parameters are set to NaN.']);
        
        obj.DesPositionOutput.Type = des.PositionOutput;
        obj.DesPositionOutput.NumParam = n_param;
    end

end