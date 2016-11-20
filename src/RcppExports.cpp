// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// wcrossprod
ListOf<SEXP> wcrossprod(SEXP pBigMat, arma::mat& covar, const arma::vec& y, const arma::vec& z0, const arma::vec& w0, double tol, int maxiter);
RcppExport SEXP bigsnpr_wcrossprod(SEXP pBigMatSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP z0SEXP, SEXP w0SEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w0(w0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(wcrossprod(pBigMat, covar, y, z0, w0, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// prs2
NumericVector prs2(SEXP pBigMat, const NumericMatrix& odds, const IntegerVector& indTest, const IntegerVector& indCol);
RcppExport SEXP bigsnpr_prs2(SEXP pBigMatSEXP, SEXP oddsSEXP, SEXP indTestSEXP, SEXP indColSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type odds(oddsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indTest(indTestSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indCol(indColSEXP);
    rcpp_result_gen = Rcpp::wrap(prs2(pBigMat, odds, indTest, indCol));
    return rcpp_result_gen;
END_RCPP
}
// prs1
NumericVector prs1(SEXP pBigMat, const NumericVector& betas, const IntegerVector& indTest, const IntegerVector& indCol);
RcppExport SEXP bigsnpr_prs1(SEXP pBigMatSEXP, SEXP betasSEXP, SEXP indTestSEXP, SEXP indColSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indTest(indTestSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indCol(indColSEXP);
    rcpp_result_gen = Rcpp::wrap(prs1(pBigMat, betas, indTest, indCol));
    return rcpp_result_gen;
END_RCPP
}
// mycount
ListOf<IntegerMatrix> mycount(SEXP pBigMat, const IntegerVector& indCase, const IntegerVector& indControl);
RcppExport SEXP bigsnpr_mycount(SEXP pBigMatSEXP, SEXP indCaseSEXP, SEXP indControlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indCase(indCaseSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indControl(indControlSEXP);
    rcpp_result_gen = Rcpp::wrap(mycount(pBigMat, indCase, indControl));
    return rcpp_result_gen;
END_RCPP
}
// mycount2
ListOf<SEXP> mycount2(SEXP pBigMat, const IntegerVector& indCase, const IntegerVector& indControl);
RcppExport SEXP bigsnpr_mycount2(SEXP pBigMatSEXP, SEXP indCaseSEXP, SEXP indControlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indCase(indCaseSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indControl(indControlSEXP);
    rcpp_result_gen = Rcpp::wrap(mycount2(pBigMat, indCase, indControl));
    return rcpp_result_gen;
END_RCPP
}
// R_squared_chr
Rcpp::NumericVector R_squared_chr(SEXP pBigMat, const IntegerVector& rowInd, const IntegerVector& colInd, const NumericVector& colMat0);
RcppExport SEXP bigsnpr_R_squared_chr(SEXP pBigMatSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colMat0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type colMat0(colMat0SEXP);
    rcpp_result_gen = Rcpp::wrap(R_squared_chr(pBigMat, rowInd, colInd, colMat0));
    return rcpp_result_gen;
END_RCPP
}
// rawToBigPart
void rawToBigPart(SEXP pBigMat, const RawVector& source, const IntegerMatrix& tab, int size, int colOffset, int n, int bsz);
RcppExport SEXP bigsnpr_rawToBigPart(SEXP pBigMatSEXP, SEXP sourceSEXP, SEXP tabSEXP, SEXP sizeSEXP, SEXP colOffsetSEXP, SEXP nSEXP, SEXP bszSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type colOffset(colOffsetSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type bsz(bszSEXP);
    rawToBigPart(pBigMat, source, tab, size, colOffset, n, bsz);
    return R_NilValue;
END_RCPP
}
// writebina
void writebina(const char * filename, SEXP pBigMat, const RawVector& tab);
RcppExport SEXP bigsnpr_writebina(SEXP filenameSEXP, SEXP pBigMatSEXP, SEXP tabSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type tab(tabSEXP);
    writebina(filename, pBigMat, tab);
    return R_NilValue;
END_RCPP
}
