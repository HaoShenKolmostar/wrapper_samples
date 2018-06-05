import example

input_nums = example.intArray(3)
for i in range(1, 4):
    input_nums[i-1] = i

# C Structure definetion
# typedef struct {
# 	MeasurementInfo *measurement_infos;
# 	int measurement_infos_count;
# 	char *prompt;
# } PredictMeasurementsOutput;

_measurements = example.MeasurementInfoArray(3)
output = example.PredictMeasurementsOutput()
output.measurement_infos = _measurements

example.PredictMeasurements(input_nums, 3, output)

print('\nFunction called succesfully')
for i in range(output.measurement_infos_count):
    # Do not support iterating
    # for info in output.measurement_infos:
    print(_measurements[i].doppler)
    # Do not support indexing
    # print(output.measurement_infos[i].doppler)
