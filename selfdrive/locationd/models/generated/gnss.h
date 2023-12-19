#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void gnss_update_6(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_20(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_7(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_21(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_err_fun(double *nom_x, double *delta_x, double *out_769020749321527910);
void gnss_inv_err_fun(double *nom_x, double *true_x, double *out_6434868672514128410);
void gnss_H_mod_fun(double *state, double *out_5816879217043291130);
void gnss_f_fun(double *state, double dt, double *out_8075609735883072475);
void gnss_F_fun(double *state, double dt, double *out_7333316748729345884);
void gnss_h_6(double *state, double *sat_pos, double *out_6468678908706064352);
void gnss_H_6(double *state, double *sat_pos, double *out_3868951147833506795);
void gnss_h_20(double *state, double *sat_pos, double *out_7441535645826448778);
void gnss_H_20(double *state, double *sat_pos, double *out_8090373605569156258);
void gnss_h_7(double *state, double *sat_pos_vel, double *out_3881194323588387136);
void gnss_H_7(double *state, double *sat_pos_vel, double *out_3194084289009820845);
void gnss_h_21(double *state, double *sat_pos_vel, double *out_3881194323588387136);
void gnss_H_21(double *state, double *sat_pos_vel, double *out_3194084289009820845);
void gnss_predict(double *in_x, double *in_P, double *in_Q, double dt);
}