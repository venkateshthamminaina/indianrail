#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void station_init (struct station *station);
void station_load_train (struct station *station, int count);
void station_wait_for_train (struct station *station);
void station_on_board (struct station *station);

struct station
{
  /*Statements */
};

void
station_init (struct station *station)
{
  /*statements to execute */
}

void
station_load_train (struct station *station, int count)
{
  /*statements to execute */
}

void
station_wait_for_train (struct station *station)
{
  /*statements to execute */
}

void station_on
board (struct station *station)
{
  /*statements to execute */
}
