#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

enum
{
    ARG_NAME,
    ARG_NSAMPS,
    ARG_FREQ,
    ARG_SR,
    ARG_NARGS
};

int main(int argc, char **argv)
{

    int i, nsamps;
    double sample, frequency, sample_rate;
    double twopi = 2.0 * PI;
    double angleincr;

    if (argc != ARG_NARGS)
    {

        fprintf(stderr, "Usage: Sinetext2 nsamp frequency sample rate\n");
        return 1;
    }

    nsamps = atoi(argv[ARG_NSAMPS]);
    frequency = atof(argv[ARG_FREQ]);
    sample_rate = atof(argv[ARG_SR]);

    angleincr = twopi * frequency / sample_rate;
    for (i = 0; i < nsamps; i++)
    {
        sample = sin(angleincr);
        fprintf(stdout, "%.8lf\t%.8lf\n", sample, sample * sample);
    }
    fprintf(stderr, "done\n");
    return 0;
}