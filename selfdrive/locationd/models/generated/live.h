#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_7429008421233965090);
void live_err_fun(double *nom_x, double *delta_x, double *out_7284268987952680115);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_4617513455921064816);
void live_H_mod_fun(double *state, double *out_9076499371074019083);
void live_f_fun(double *state, double dt, double *out_7863759626582993905);
void live_F_fun(double *state, double dt, double *out_4436932215835623194);
void live_h_4(double *state, double *unused, double *out_3414164203987698111);
void live_H_4(double *state, double *unused, double *out_1320474316052717902);
void live_h_9(double *state, double *unused, double *out_3803073597728245259);
void live_H_9(double *state, double *unused, double *out_5477642052407495385);
void live_h_10(double *state, double *unused, double *out_5079492584863434208);
void live_H_10(double *state, double *unused, double *out_2479322990341632036);
void live_h_12(double *state, double *unused, double *out_6224366416023586503);
void live_H_12(double *state, double *unused, double *out_699375291005124235);
void live_h_35(double *state, double *unused, double *out_8146514266443503093);
void live_H_35(double *state, double *unused, double *out_2046187741319889474);
void live_h_32(double *state, double *unused, double *out_3901636462027137299);
void live_H_32(double *state, double *unused, double *out_1733566046432444446);
void live_h_13(double *state, double *unused, double *out_6669897253458653498);
void live_H_13(double *state, double *unused, double *out_1446272565186157079);
void live_h_14(double *state, double *unused, double *out_3803073597728245259);
void live_H_14(double *state, double *unused, double *out_5477642052407495385);
void live_h_33(double *state, double *unused, double *out_3006773689665239248);
void live_H_33(double *state, double *unused, double *out_5196744745958747078);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}