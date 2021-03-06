#pragma once

// Constants (physics)
const static double BOLTZMANN_K = 8.617343e-5;
const static double ELECTRON_CHARGE_Q = 1.602176e-19;
const static double WANG_B = 3.9e-3;

// Calculate general K_d parameter
double 
calcKd(double ktp, double kfit, double L, double n, double u, double phi);

// Calculate thermal voltage, phi_t
double
calcPhi(double T);

// Calculate IC 
double
calcIC(double dibl, double vdd, double vt, double n, double phi);

// Calculate delay
double
markovicDelay(double kd, double vdd, double ic, double y1, double w1, double w2);

// Calculates gate independent IS
//  Multiply by W to get IS.
double
calcIS_noW(double n, double u, double cox, double L, double phi);

// Calculate leakage
double 
markovicLeakageCurrent(double IS_noW, double W, double dibl, double vdd, double vt, double n, double phi);

// Calculate delta V_th
double 
wangDeltaV_th(double b, double alpha, double t);