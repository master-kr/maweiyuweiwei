#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_7792005023266191321);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_5315267233560935918);
void car_H_mod_fun(double *state, double *out_7339459761251930020);
void car_f_fun(double *state, double dt, double *out_2286622615178359403);
void car_F_fun(double *state, double dt, double *out_8254211230775852992);
void car_h_25(double *state, double *unused, double *out_6918209566450062964);
void car_H_25(double *state, double *unused, double *out_4801460618481353345);
void car_h_24(double *state, double *unused, double *out_1902027086632663468);
void car_H_24(double *state, double *unused, double *out_3973431789330817549);
void car_h_30(double *state, double *unused, double *out_3280760038196040614);
void car_H_30(double *state, double *unused, double *out_4672121671338113275);
void car_h_26(double *state, double *unused, double *out_6448147115644818676);
void car_H_26(double *state, double *unused, double *out_1059957299607297121);
void car_h_27(double *state, double *unused, double *out_1916536298789217319);
void car_H_27(double *state, double *unused, double *out_2497358359537688364);
void car_h_29(double *state, double *unused, double *out_2677444153519563097);
void car_H_29(double *state, double *unused, double *out_783995632668137331);
void car_h_28(double *state, double *unused, double *out_3149881219929125404);
void car_H_28(double *state, double *unused, double *out_4298403384401393243);
void car_h_31(double *state, double *unused, double *out_845055690370609477);
void car_H_31(double *state, double *unused, double *out_4832106580358313773);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}