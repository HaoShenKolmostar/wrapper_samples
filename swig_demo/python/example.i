%module example
%inline %{
#include "example.h"
%}

%include "stdint.i"
%include "carrays.i"

%array_class(MeasurementInfo, MeasurementInfoArray);
%array_class(int, intArray);