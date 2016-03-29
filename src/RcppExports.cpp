// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// qubic
List qubic(const NumericMatrix matrix, const short r, const double q, const double c, const int o, const double f, const int k, const bool P, const bool S, const bool C, const bool verbose);
RcppExport SEXP QUBIC_qubic(SEXP matrixSEXP, SEXP rSEXP, SEXP qSEXP, SEXP cSEXP, SEXP oSEXP, SEXP fSEXP, SEXP kSEXP, SEXP PSEXP, SEXP SSEXP, SEXP CSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< const short >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int >::type o(oSEXP);
    Rcpp::traits::input_parameter< const double >::type f(fSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type P(PSEXP);
    Rcpp::traits::input_parameter< const bool >::type S(SSEXP);
    Rcpp::traits::input_parameter< const bool >::type C(CSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(qubic(matrix, r, q, c, o, f, k, P, S, C, verbose));
    return __result;
END_RCPP
}
// qubic_d
List qubic_d(const IntegerMatrix matrix, const double c, const int o, const double f, const int k, const bool P, const bool S, const bool C, const bool verbose);
RcppExport SEXP QUBIC_qubic_d(SEXP matrixSEXP, SEXP cSEXP, SEXP oSEXP, SEXP fSEXP, SEXP kSEXP, SEXP PSEXP, SEXP SSEXP, SEXP CSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< const double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int >::type o(oSEXP);
    Rcpp::traits::input_parameter< const double >::type f(fSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type P(PSEXP);
    Rcpp::traits::input_parameter< const bool >::type S(SSEXP);
    Rcpp::traits::input_parameter< const bool >::type C(CSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(qubic_d(matrix, c, o, f, k, P, S, C, verbose));
    return __result;
END_RCPP
}
// qudiscretize
NumericMatrix qudiscretize(const NumericMatrix x, const short r, const double q);
RcppExport SEXP QUBIC_qudiscretize(SEXP xSEXP, SEXP rSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const short >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    __result = Rcpp::wrap(qudiscretize(x, r, q));
    return __result;
END_RCPP
}
