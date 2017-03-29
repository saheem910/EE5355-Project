function frost_addpath()

% Add system related functions paths
cur = fileparts(mfilename('fullpath'));

addpath(fullfile(cur, 'mathematica'));

addpath(genpath(fullfile(cur, 'matlab')));
addpath(fullfile(cur, 'matlab','nlp'));
addpath(fullfile(cur, 'matlab','solver'));
addpath(fullfile(cur, 'matlab','system'));
addpath(fullfile(cur, 'matlab','kinematics'));
addpath(fullfile(cur, 'matlab','control'));
addpath(fullfile(cur, 'matlab','model'));
% Add useful custom functions path
addpath(fullfile(cur, 'matlab','utils'));
addpath_matlab_utilities('general', 'mex',...
    'graphics', 'cwf', 'polynomial', 'sys', 'mathlink',...
    'ros', 'sim', 'plot', 'validation');

% Add third party packages/libraries path
addpath(fullfile(cur, 'third'));
addpath_thirdparty_packages('GetFullPath',...
    'spatial_v2', 'yaml', 'mathlink','ipopt','sparse2');

% addpath(fullfile(cur, 'example'));

% addpath(fullfile(cur, 'docs'));
end
