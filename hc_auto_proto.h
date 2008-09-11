/* ggrd_grdtrack_util.c */
void ggrd_init_master(struct ggrd_master *);
void ggrd_grdinfo(char *);
int ggrd_grdtrack_init_general(unsigned char, char *, char *, char *, struct ggrd_gt *, unsigned char, unsigned char);
int ggrd_grdtrack_rescale(struct ggrd_gt *, unsigned char, unsigned char, unsigned char, double);
unsigned char ggrd_grdtrack_interpolate_rtp(double, double, double, struct ggrd_gt *, double *, unsigned char,unsigned char);
unsigned char ggrd_grdtrack_interpolate_xyz(double, double, double, struct ggrd_gt *, double *, unsigned char);
unsigned char ggrd_grdtrack_interpolate_tp(double, double, struct ggrd_gt *, double *, unsigned char,unsigned char);
unsigned char ggrd_grdtrack_interpolate_xy(double, double, struct ggrd_gt *, double *, unsigned char);
void ggrd_grdtrack_free_gstruc(struct ggrd_gt *);
void ggrd_find_spherical_vel_from_rigid_cart_rot(double *, double *, double *, double *, double *);
void ggrd_print_layer_avg(float *, float *, int, int, int, FILE *, int *);
int ggrd_init_thist_from_file(struct ggrd_t *, char *, unsigned char, unsigned char);
void ggrd_gt_interpolate_z(double, float *, int, int *, int *, double *, double *, unsigned char, unsigned char *);
void ggrd_interpol_time(double, struct ggrd_t *, int *, int *, double *, double *, double);
int interpolate_seafloor_ages(double, double, double, struct ggrd_master *, double *);
FILE *ggrd_open(char *, char *, char *);
void ggrd_vecalloc(double **, int, char *);
void ggrd_vecrealloc(double **, int, char *);
void ggrd_calc_mean_and_stddev(double *, double *, int, double *, double *, double *, unsigned char, unsigned char, double *);
void ggrd_indexx(int, double *, int *);
float ggrd_gt_rms(float *, int);
float ggrd_gt_mean(float *, int);
/* ggrd_readgrds.c */
void ggrd_init_vstruc(struct ggrd_master *);
int ggrd_read_vel_grids(struct ggrd_master *, double, unsigned short, unsigned short, char *);
void ggrd_resort_and_check(double *, float *, double *, int, int, unsigned short, double, unsigned short, unsigned short, double, unsigned char *);
void ggrd_read_depth_levels(struct ggrd_master *, int **, char *, unsigned short);
/* ggrd_test.c */
/* ggrd_velinterpol.c */
int ggrd_find_vel_and_der(double *, double, double, struct ggrd_master *, int, unsigned short, unsigned short, double *, double *, double *);
void ggrd_get_velocities(double *, double *, double *, int, struct ggrd_master *, double, double);
void ggrd_weights(double, double *, int, int, double [(5 +1)][(1 +1)]);
/* grdinttester.c */
/* hc_extract_sh_layer.c */
/* hc_init.c */
void hc_init_parameters(struct hc_parameters *);
void hc_struc_init(struct hcs **);
void hc_init_polsol_struct(struct hc_ps *);
void hc_init_main(struct hcs *, int, struct hc_parameters *);
void hc_init_constants(struct hcs *, double, char *, unsigned short);
void hc_handle_command_line(int, char **, struct hc_parameters *);
void hc_assign_viscosity(struct hcs *, int, double [4], struct hc_parameters *);
void hc_assign_density(struct hcs *, unsigned short, int, char *, int, unsigned short,  unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, int, double *, double *, unsigned short);
double hc_find_dens_scale(double, double, unsigned short, double *, double *, int);
void hc_init_phase_boundaries(struct hcs *, int, unsigned short);
void hc_assign_plate_velocities(struct hcs *, int, char *, unsigned short, int, unsigned short, unsigned short);
void hc_init_l_factors(struct hcs *, int);
void hc_get_blank_expansions(struct sh_lms **, int, int, char *);
void hc_struc_free(struct hcs **);
void hc_assign_dd_scaling(int, double [4], struct hc_parameters *, double);
void hc_read_geoid(struct hc_parameters *);
/* hc_input.c */
void hc_read_sh_solution(struct hcs *, struct sh_lms **, FILE *, unsigned short, unsigned short);
/* hc_matrix.c */
void hc_ludcmp_3x3(double [3][3], int *);
void hc_lubksb_3x3(double [3][3], int *, double *);
/* hc_misc.c */
void hc_dvecalloc(double **, int, char *);
void hc_svecalloc(float **, int, char *);
void hc_vecalloc(double **, int, char *);
void hc_scmplx_vecalloc(struct hc_scmplx **, int, char *);
void hc_svecrealloc(float **, int, char *);
void hc_dvecrealloc(double **, int, char *);
void hc_vecrealloc(double **, int, char *);
float hc_svec_rms_diff(float *, float *, int);
float hc_svec_rms(float *, int);
void hc_a_equals_b_svector(float *, float *, int);
void hc_a_equals_b_vector(double *, double *, int);
float hc_mean_svec(float *, int);
double hc_mean_vec(double *, int);
void hc_zero_dvector(double *, int);
void hc_zero_lvector(unsigned short *, int);
void hc_get_flt_frmt_string(char *, int, unsigned short);
char *hc_name_boolean(unsigned short);
unsigned short hc_toggle_boolean(unsigned short *);
void hc_advance_argument(int *, int, char **);
void hc_compute_correlation(struct sh_lms *, struct sh_lms *, double *, int, unsigned short);
/* hc_output.c */
void hc_print_spectral_solution(struct hcs *, struct sh_lms *, FILE *, int, unsigned short, unsigned short);
void hc_print_sh_scalar_field(struct sh_lms *, FILE *, unsigned short, unsigned short, unsigned short);
void hc_print_spatial_solution(struct hcs *, struct sh_lms *, float *, char *, char *, int, unsigned short, unsigned short);
void hc_print_depth_layers(struct hcs *, FILE *, unsigned short);
void hc_print_3x3(double [3][3], FILE *);
void hc_print_sm(double [6][4], FILE *);
void hc_print_vector(double *, int, FILE *);
void hc_print_vector_label(double *, int, FILE *, char *);
void hc_print_matrix_label(double *, int, int, FILE *, char *);
void hc_print_vector_row(double *, int, FILE *);
void hc_compute_solution_scaling_factors(struct hcs *, int, double, double, double *);
void hc_print_poloidal_solution(struct sh_lms *, struct hcs *, int, char *, unsigned short, unsigned short);
void hc_print_toroidal_solution(double *, int, struct hcs *, int, char *, unsigned short);
/* hc_polsol.c */
void hc_polsol(struct hcs *, int, double *, int, double *, unsigned short, struct sh_lms *, unsigned short, int, double *, double *, unsigned short, struct sh_lms *, struct sh_lms *, unsigned short, struct sh_lms *, unsigned short, unsigned short);
/* hc_propagator.c */
void hc_evalpa(int, double, double, double, double *);
void hc_evppot(int, double, double *);
/* hc_solve.c */
void hc_solve(struct hcs *, unsigned short, int, struct sh_lms *, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, struct sh_lms *, unsigned short);
void hc_sum(struct hcs *, int, struct sh_lms *, struct sh_lms *, int, unsigned short, struct sh_lms *, unsigned short);
void hc_compute_sol_spatial(struct hcs *, struct sh_lms *, float **, unsigned short);
/* hc_torsol.c */
void hc_torsol(struct hcs *, int, int, int, double *, double **, double **, struct sh_lms *, struct sh_lms *, double *, unsigned short);
/* main.c */
/* prem_util.c */
int prem_find_layer_x(double, double, double *, int, int, double *);
double prem_compute_pval(double *, double *, int, double);
double prem_compute_dpval(double *, double *, int, double);
double prem_vs_voigt(double, double, double, double, double);
void prem_get_rhodrho(double *, double *, double, struct prem_model *);
void prem_get_rho(double *, double, struct prem_model *);
void prem_get_pressure(double *, double, struct prem_model *);
void prem_get_values(double *, double *, double *, double *, double *, double *, double *, double *, double *, double *, double, struct prem_model *);
int prem_read_model(char *, struct prem_model *, unsigned short);
int prem_read_para_set(double *, int, int, FILE *);
/* rick_fft_c.c */
void rick_cs2ab(float *, int);
void rick_ab2cs(float *, int);
void rick_realft_nr(float *, int, int);
void rick_four1_nr(float *, int, int);
/* rick_sh_c.c */
void rick_compute_allplm(int, int, float *, float *, struct rick_module *);
void rick_compute_allplm_reg(int, int, float *, float *, struct rick_module *, float *, int);
void rick_pix2ang(int, int, float *, float *, struct rick_module *);
void rick_shc2d(float *, float *, int, int, float *, float *, struct rick_module *);
void rick_shc2d_reg(float *, float *, int, int, float *, float *, struct rick_module *, float *, int, float *, int, unsigned short);
void rick_shc2d_pre(float *, float *, int, float *, float *, int, float *, float *, struct rick_module *);
void rick_shc2d_pre_reg(float *, float *, int, float *, float *, int, float *, float *, struct rick_module *, float *, int, float *, int, unsigned short);
void rick_shc2d_irreg(float *, float *, int, int, float *, float *, struct rick_module *, float *, float *, int);
void rick_shd2c(float *, float *, int, int, float *, float *, struct rick_module *);
void rick_shd2c_pre(float *, float *, int, float *, float *, int, float *, float *, struct rick_module *);
void rick_init(int, int, int *, int *, int *, struct rick_module *, unsigned short);
void rick_free_module(struct rick_module *, int);
void rick_plmbar1(float *, float *, int, int, float, struct rick_module *);
void rick_gauleg(float, float, float *, float *, int);
/* rotvec2vel.c */
FILE *rv_myopen(const char *, const char *);
/* sh_ana.c */
/* shana_sh.c */
void shana_compute_allplm(int, int, double *, double *, struct shana_module *);
void shana_pix2ang(int, int, double *, double *, struct shana_module *);
void shana_shc2d(double *, double *, int, int, double *, double *, struct shana_module *);
void shana_shc2d_pre(double *, double *, int, double *, double *, int, float *, float *, struct shana_module *);
void shana_shd2c(double *, double *, int, int, double *, double *, struct shana_module *);
void shana_shd2c_pre(double *, double *, int, double *, double *, int, double *, double *, struct shana_module *);
void shana_init(int, int, int *, int *, int *, struct shana_module *);
void shana_free_module(struct shana_module *, int);
void shana_plmbar1(double *, double *, int, int, double, struct shana_module *);
/* sh_corr.c */
/* sh_exp.c */
void sh_allocate_and_init(struct sh_lms **, int, int, int, int, unsigned short, unsigned short);
void sh_init_expansion(struct sh_lms *, int, int, int, unsigned short, unsigned short);
void sh_free_expansion(struct sh_lms *, int);
void sh_clear_alm(struct sh_lms *);
double sh_total_power(struct sh_lms *);
void sh_compute_power_per_degree(struct sh_lms *, float *);
double sh_correlation(struct sh_lms *, struct sh_lms *, int);
double sh_correlation_per_degree(struct sh_lms *, struct sh_lms *, int, int);
void sh_print_parameters_to_file(struct sh_lms *, int, int, int, double, FILE *, unsigned short, unsigned short, unsigned short);
unsigned short sh_read_parameters_from_file(int *, int *, int *, int *, int *, double *, int *, FILE *, unsigned short, unsigned short, unsigned short);
void sh_print_coefficients_to_file(struct sh_lms *, int, FILE *, double *, unsigned short, unsigned short);
void sh_read_coefficients_from_file(struct sh_lms *, int, int, FILE *, unsigned short, double *, unsigned short);
void sh_print_nonzero_coeff(struct sh_lms *, FILE *);
void sh_read_spatial_data_from_file(struct sh_lms *, FILE *, unsigned short, int, float *, float *);
void sh_read_spatial_data_from_grd(struct sh_lms *, struct ggrd_gt *, unsigned short, int, float *, float *);
void sh_read_spatial_data(struct sh_lms *, FILE *, struct ggrd_gt *, unsigned short, unsigned short, int, float *, float *);
void sh_compute_spatial_basis(struct sh_lms *, FILE *, unsigned short, float, float **, int, unsigned short);
void sh_compute_spectral(float *, int, unsigned short, float **, struct sh_lms *, unsigned short);
void sh_compute_spatial(struct sh_lms *, int, unsigned short, float **, float *, unsigned short);
void sh_compute_spatial_reg(struct sh_lms *, int, unsigned short, float **, float *, int, float *, int, float *, unsigned short, unsigned short);
void sh_compute_spatial_irreg(struct sh_lms *, int, float *, float *, int, float *, unsigned short);
void sh_exp_type_error(char *, struct sh_lms *);
void sh_print_plm(float *, int, int, int, FILE *);
void sh_print_spatial_data_to_file(struct sh_lms *, int, float *, unsigned short, float, FILE *);
void sh_print_reg_spatial_data_to_file(struct sh_lms *, int, float *, unsigned short, float, float *, int, float *, int, FILE *);
void sh_print_irreg_spatial_data_to_file(struct sh_lms *, int, float *, unsigned short, float, float *, float *, int, FILE *);
void sh_compute_plm(struct sh_lms *, int, float **, unsigned short);
void sh_compute_plm_reg(struct sh_lms *, int, float **, unsigned short, float *, int);
void sh_get_coeff(struct sh_lms *, int, int, int, unsigned short, double *);
void sh_write_coeff(struct sh_lms *, int, int, int, unsigned short, double *);
void sh_aexp_equals_bexp_coeff(struct sh_lms *, struct sh_lms *);
void sh_scale_expansion_l_factor(struct sh_lms *, double *);
void sh_scale_expansion(struct sh_lms *, double);
/* sh_model.c */
void sh_init_model(struct sh_lms_model *, int, int, int, int, int, int, unsigned short);
void sh_free_model(struct sh_lms_model *);
void sh_print_model_coefficients(struct sh_lms_model *, FILE *, unsigned short, unsigned short);
void sh_print_model_spatial_basis(struct sh_lms_model *, FILE *, unsigned short);
void sh_read_model_spatial_data(struct sh_lms_model *, float **, FILE *, unsigned short);
void sh_compute_model_spectral(struct sh_lms_model *, float *, unsigned short);
void sh_compute_model_spatial(struct sh_lms_model *, float **, unsigned short);
void sh_print_model_spatial_data(struct sh_lms_model *, float *, FILE *, unsigned short);
/* sh_power.c */
/* sh_syn.c */
/* sh_test.c */
/* simple_test.c */
void hc_dvecalloc(double **, int, char *);
/* spherepack_sh.c */
/* test_fft.c */
