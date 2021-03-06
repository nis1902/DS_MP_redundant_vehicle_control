function status = isBlockFilteredFromGroup(maskName)
%ISBLOCKFILTEREDFROMGROUP checks input mask name against predefined mask 
% name list to be filtered out for GROUP generation.
%
% ABSTRACT:
%
% Input Arguments:
%   maskName - Name of a subsystem??s mask
%
% Output Argument:
%   status - Returns true if input name is listed in the filter listed
%
% isSubsystemFilteredForASAP2

%   Copyright 2011 The MathWorks, Inc.

status = false;
   
if ~isempty(maskName)
  % List of mask names to be filtered out for ASAP2 GROUP generation.
  MaskNamesToFilter = {...   
    'Fixed-Point State-Space',...
    'Transfer Fcn Direct Form II',...
    'Transfer Fcn Direct Form II Time Varying',...
    'Unit Delay Enabled',...
    'Unit Delay Enabled External Initial Condition',...
    'Unit Delay Enabled Resettable',...
    'Unit Delay Enabled Resettable External Initial Condition',...
    'Unit Delay External Initial Condition',...
    'Unit Delay Resettable',...
    'Unit Delay Resettable External Initial Condition',...
    'Unit Delay With Preview Enabled',...
    'Unit Delay With Preview Enabled Resettable',...
    'Unit Delay With Preview Enabled Resettable External RV',...
    'Unit Delay With Preview Resettable',...
    'Unit Delay With Preview Resettable External RV',...
    'Real World Value Decrement',...
    'Stored Integer Value Decrement',...
    'Decrement To Zero',...
    'Decrement Time To Zero',...
    'Real World Value Increment',...
    'Stored Integer Value Increment',...
    'Virtual Subsystem',...
    'PID 1dof',...
    'PID 2dof',...
    'Coulombic and Viscous Friction',...
    'Dead Zone Dynamic',...
    'Rate Limiter Dynamic',...
    'Saturation Dynamic',...
    'Wrap To Zero',...
    'Difference',...
    'Discrete Derivative',...
    'First-Order Hold',...
    'First Order Transfer Fcn',...
    'Lead or Lag Compensator',...
    'Transfer Fcn Real Zero',...
    'Bit Clear',...
    'Bit Set',...
    'Compare To Constant',...
    'Compare To Zero',...
    'Detect Change',...
    'Detect Decrease',...
    'Detect Increase',...
    'Detect Fall Negative',...
    'Detect Fall Nonpositive',...
    'Detect Rise Nonnegative',...
    'Detect Rise Positive',...
    'Extract Bits',...
    'Interval Test',...
    'Interval Test Dynamic',...
    'Sine and Cosine',...
    'Algebraic Constraint',...
    'MinMax Running Resettable',...
    'Slider Gain',...
    'Checks_Gradient',...
    'Checks_DGap',...
    'Checks_DRange',...
    'Checks_SGap',...
    'Checks_SRange',...
    'Checks_DMin',...
    'Checks_DMax',...
    'Checks_Resolution',...
    'Checks_SMin',...
    'Checks_SMax',...
    'DocBlock',...
    'CMBlock',...
    'Timed Linearization',...
    'Triggered Linearization',...
    'Atomic Subsystem',...
    'Code Reuse Subsystem',...
    'Enabled Subsystem',...
    'Enabled And Triggered Subsystem',...
    'For Each Subsystem',...
    'For Iterator Subsystem',...
    'Function-Call Subsystem',...
    'If Action Subsystem',...
    'Switch Case Action Subsystem',...
    'Triggered Subsystem',...
    'Variant Subsystem',...
    'While Iterator Subsystem',...
    'Conversion Inherited',...
    'Scaling Strip',...
    'Environment Controller',...
    'Manual Switch',...
    'XY scope.',...
    'Band-Limited White Noise.',...
    'chirp',...
    'Counter Free-Running',...
    'Counter Limited',...
    'Enumerated Constant',...
    'Ramp',...
    'Repeating table',...
    'Repeating Sequence Interpolated',...
    'Repeating Sequence Stair',...
    'Sigbuilder block',...
    'Stateflow',...
    };
  
  % Loop through the mask name list and compare the names.
  for i = 1:size(MaskNamesToFilter,2)
    if strcmp(MaskNamesToFilter{i}, maskName)
      % Input mask name is listed. Return true.
      status = true;
      break
    end
  end
  
end

end
