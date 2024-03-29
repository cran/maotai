#' Tools for Matrix Algebra, Optimization and Inference
#' 
#' Matrix is an universal and sometimes primary object/unit in applied mathematics and statistics. We provide a number of algorithms for selected problems in optimization and statistical inference.
#' 
#' @docType package
#' @name package-maotai
#' @import Rdpack
#' @noRd
#' @importFrom dbscan dbscan
#' @importFrom fastcluster hclust
#' @importFrom RANN nn2
#' @importFrom cluster pam silhouette
#' @importFrom stats as.dist knots ecdf rnorm runif quantile dist rgamma rgeom var cov lm
#' @importFrom shapes procGPA
#' @importFrom Rtsne Rtsne
#' @importFrom pracma cross
#' @importFrom utils packageVersion
#' @importFrom RSpectra eigs
#' @importFrom Matrix rankMatrix
#' @importFrom Rcpp evalCpp
#' @useDynLib maotai
NULL
# pack <- "maotai"
# path <- find.package(pack)
# system(paste(shQuote(file.path(R.home("bin"), "R")),
#              "CMD", "Rd2pdf", shQuote(path)))
