typedef struct {
	char system;
	int sat_id;
	int in_week_ms;
	int transmit_time_ms;
	double transmit_time;
	double doppler;
	double elevation;
} MeasurementInfo;

typedef struct {
	MeasurementInfo *measurement_infos;
	int measurement_infos_count;
	char *prompt;
} PredictMeasurementsOutput;

void PredictMeasurements(const int input[], int input_count,
		PredictMeasurementsOutput *output);
