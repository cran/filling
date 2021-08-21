// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_HardImpute
arma::cube cpp_HardImpute(arma::mat& X, arma::mat& idmat, arma::vec& lambdas, const double tol, const int maxiter, arma::cube& SoftRes, const int rk);
RcppExport SEXP _filling_cpp_HardImpute(SEXP XSEXP, SEXP idmatSEXP, SEXP lambdasSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP SoftResSEXP, SEXP rkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type idmat(idmatSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type SoftRes(SoftResSEXP);
    Rcpp::traits::input_parameter< const int >::type rk(rkSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_HardImpute(X, idmat, lambdas, tol, maxiter, SoftRes, rk));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nSVD
arma::mat cpp_nSVD(arma::mat& X, arma::mat& idmat, arma::mat& Minit, const double lambda, const double tol, const int maxiter);
RcppExport SEXP _filling_cpp_nSVD(SEXP XSEXP, SEXP idmatSEXP, SEXP MinitSEXP, SEXP lambdaSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type idmat(idmatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Minit(MinitSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nSVD(X, idmat, Minit, lambda, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_SoftImpute
arma::cube cpp_SoftImpute(arma::mat& X, arma::mat& idmat, arma::vec& lambdas, const double tol, const int maxiter, arma::mat& Zinit);
RcppExport SEXP _filling_cpp_SoftImpute(SEXP XSEXP, SEXP idmatSEXP, SEXP lambdasSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP ZinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type idmat(idmatSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Zinit(ZinitSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_SoftImpute(X, idmat, lambdas, tol, maxiter, Zinit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_filling_cpp_HardImpute", (DL_FUNC) &_filling_cpp_HardImpute, 7},
    {"_filling_cpp_nSVD", (DL_FUNC) &_filling_cpp_nSVD, 6},
    {"_filling_cpp_SoftImpute", (DL_FUNC) &_filling_cpp_SoftImpute, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_filling(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
