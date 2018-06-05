#include "stdlib.h"
#include "example.h"

void PredictMeasurements(const int input[], int input_count,
		PredictMeasurementsOutput *output) {
	output->prompt = "done!";
	output->measurement_infos_count = input_count;
	for (int i = 0; i < input_count; i++) {
		int input_num = input[i];
		output->measurement_infos[i].system = input_num;
		output->measurement_infos[i].sat_id = input_num % 10 + 120;
		output->measurement_infos[i].in_week_ms = (input_num % 7) * 86400;
		output->measurement_infos[i].transmit_time_ms = input_num + 1000;
		output->measurement_infos[i].transmit_time = input_num * 10.001;
		output->measurement_infos[i].doppler = input_num * 20.002;
		output->measurement_infos[i].elevation = input_num * 30.003;
	}
}
