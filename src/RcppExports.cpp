// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// diff_rcpp
NumericVector diff_rcpp(NumericVector xs);
RcppExport SEXP amt_diff_rcpp(SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xs(xsSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_rcpp(xs));
    return rcpp_result_gen;
END_RCPP
}
// within_rcpp
LogicalVector within_rcpp(NumericVector x, int a, int b);
RcppExport SEXP amt_within_rcpp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(within_rcpp(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// simulate_udf
IntegerVector simulate_udf(int n_steps, int start, int nc, int nr, NumericMatrix mk, NumericMatrix hk);
RcppExport SEXP amt_simulate_udf(SEXP n_stepsSEXP, SEXP startSEXP, SEXP ncSEXP, SEXP nrSEXP, SEXP mkSEXP, SEXP hkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_steps(n_stepsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mk(mkSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hk(hkSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_udf(n_steps, start, nc, nr, mk, hk));
    return rcpp_result_gen;
END_RCPP
}
// track_align
NumericVector track_align(NumericVector t1, NumericVector nt, int time_tol, int type);
RcppExport SEXP amt_track_align(SEXP t1SEXP, SEXP ntSEXP, SEXP time_tolSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< int >::type time_tol(time_tolSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(track_align(t1, nt, time_tol, type));
    return rcpp_result_gen;
END_RCPP
}
// mk_reg
NumericVector mk_reg(NumericVector t1, int time_dist, int time_tol, int start);
RcppExport SEXP amt_mk_reg(SEXP t1SEXP, SEXP time_distSEXP, SEXP time_tolSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< int >::type time_dist(time_distSEXP);
    Rcpp::traits::input_parameter< int >::type time_tol(time_tolSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(mk_reg(t1, time_dist, time_tol, start));
    return rcpp_result_gen;
END_RCPP
}
// mk_reg_old
NumericVector mk_reg_old(NumericVector relocs_time, int time_dist, int time_tol, int start);
RcppExport SEXP amt_mk_reg_old(SEXP relocs_timeSEXP, SEXP time_distSEXP, SEXP time_tolSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type relocs_time(relocs_timeSEXP);
    Rcpp::traits::input_parameter< int >::type time_dist(time_distSEXP);
    Rcpp::traits::input_parameter< int >::type time_tol(time_tolSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(mk_reg_old(relocs_time, time_dist, time_tol, start));
    return rcpp_result_gen;
END_RCPP
}
// duration_acuracy
NumericVector duration_acuracy(NumericVector x_, NumericVector y_, NumericVector t_, NumericVector dop, NumericVector dim, int duration_accuracy);
RcppExport SEXP amt_duration_acuracy(SEXP x_SEXP, SEXP y_SEXP, SEXP t_SEXP, SEXP dopSEXP, SEXP dimSEXP, SEXP duration_accuracySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_(t_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dop(dopSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int >::type duration_accuracy(duration_accuracySEXP);
    rcpp_result_gen = Rcpp::wrap(duration_acuracy(x_, y_, t_, dop, dim, duration_accuracy));
    return rcpp_result_gen;
END_RCPP
}
// track_immobility
NumericVector track_immobility(NumericVector t, NumericVector x, NumericVector y, double period, double tol);
RcppExport SEXP amt_track_immobility(SEXP tSEXP, SEXP xSEXP, SEXP ySEXP, SEXP periodSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type period(periodSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(track_immobility(t, x, y, period, tol));
    return rcpp_result_gen;
END_RCPP
}