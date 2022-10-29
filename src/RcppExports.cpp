// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// PCAoneAlg1
Rcpp::List PCAoneAlg1(const Eigen::Map<Eigen::MatrixXd>& mat, int k, int p, int q, int rand);
RcppExport SEXP _pcaone_PCAoneAlg1(SEXP matSEXP, SEXP kSEXP, SEXP pSEXP, SEXP qSEXP, SEXP randSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type rand(randSEXP);
    rcpp_result_gen = Rcpp::wrap(PCAoneAlg1(mat, k, p, q, rand));
    return rcpp_result_gen;
END_RCPP
}
// PCAoneAlg2
Rcpp::List PCAoneAlg2(const Eigen::Map<Eigen::MatrixXd>& mat, int k, int p, int q, int rand, int windows);
RcppExport SEXP _pcaone_PCAoneAlg2(SEXP matSEXP, SEXP kSEXP, SEXP pSEXP, SEXP qSEXP, SEXP randSEXP, SEXP windowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type rand(randSEXP);
    Rcpp::traits::input_parameter< int >::type windows(windowsSEXP);
    rcpp_result_gen = Rcpp::wrap(PCAoneAlg2(mat, k, p, q, rand, windows));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pcaone_PCAoneAlg1", (DL_FUNC) &_pcaone_PCAoneAlg1, 5},
    {"_pcaone_PCAoneAlg2", (DL_FUNC) &_pcaone_PCAoneAlg2, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_pcaone(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}