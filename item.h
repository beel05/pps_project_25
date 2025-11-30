// item.h
#ifndef ITEM_H
#define ITEM_H

typedef struct {
    char name[50];
    int days;               
    double *sales;          //dynamic array for daily sales
double leadTime;            //lead time in days
} Item;


double moving_average(double *sales, int n, int window);
double weighted_moving_average(double *sales, int n, int window);


double compute_mape(double *actual, double *forecast, int n);
double compute_stddev(double *sales,int n);

#endif






