// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gradF
arma::mat gradF(Function func, arma::mat xnow, double h);
RcppExport SEXP _maotai_gradF(SEXP funcSEXP, SEXP xnowSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type func(funcSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xnow(xnowSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(gradF(func, xnow, h));
    return rcpp_result_gen;
END_RCPP
}
// solve_lyapunov
arma::mat solve_lyapunov(arma::mat A, arma::mat B, arma::mat C);
RcppExport SEXP _maotai_solve_lyapunov(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_lyapunov(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// aux_shortestpath
Rcpp::NumericMatrix aux_shortestpath(NumericMatrix& wmat);
RcppExport SEXP _maotai_aux_shortestpath(SEXP wmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type wmat(wmatSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_shortestpath(wmat));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sylvester
arma::mat cpp_sylvester(arma::mat A, arma::mat B, arma::mat C);
RcppExport SEXP _maotai_cpp_sylvester(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sylvester(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// cppsub_2007Wang
arma::mat cppsub_2007Wang(arma::mat V0, int mm, int d, arma::mat Spu, arma::mat Stu, int maxiter, double eps);
RcppExport SEXP _maotai_cppsub_2007Wang(SEXP V0SEXP, SEXP mmSEXP, SEXP dSEXP, SEXP SpuSEXP, SEXP StuSEXP, SEXP maxiterSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type V0(V0SEXP);
    Rcpp::traits::input_parameter< int >::type mm(mmSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Spu(SpuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Stu(StuSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(cppsub_2007Wang(V0, mm, d, Spu, Stu, maxiter, eps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_maotai_gradF", (DL_FUNC) &_maotai_gradF, 3},
    {"_maotai_solve_lyapunov", (DL_FUNC) &_maotai_solve_lyapunov, 3},
    {"_maotai_aux_shortestpath", (DL_FUNC) &_maotai_aux_shortestpath, 1},
    {"_maotai_cpp_sylvester", (DL_FUNC) &_maotai_cpp_sylvester, 3},
    {"_maotai_cppsub_2007Wang", (DL_FUNC) &_maotai_cppsub_2007Wang, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_maotai(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
