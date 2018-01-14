// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// read_exif_
DataFrame read_exif_(std::vector < std::string > files);
RcppExport SEXP _exif_read_exif_(SEXP filesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type files(filesSEXP);
    rcpp_result_gen = Rcpp::wrap(read_exif_(files));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP exif_read_exif_(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_exif_read_exif_", (DL_FUNC) &_exif_read_exif_, 1},
    {"exif_read_exif_", (DL_FUNC) &exif_read_exif_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_exif(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
