% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/cmds.R
\name{cmds}
\alias{cmds}
\title{Classical Multidimensional Scaling}
\usage{
cmds(data, ndim = 2)
}
\arguments{
\item{data}{an \eqn{(n\times p)} matrix whose rows are observations.}

\item{ndim}{an integer-valued target dimension.}
}
\value{
a named list containing
\describe{
\item{embed}{an \eqn{(n\times ndim)} matrix whose rows are embedded observations.}
\item{stress}{discrepancy between embedded and origianl data as a measure of error.}
}
}
\description{
Classical multidimensional scaling aims at finding low-dimensional structure 
by preserving pairwise distances of data.
}
\examples{
## use simple example of iris dataset
data(iris) 
idata = as.matrix(iris[,1:4])
icol  = as.factor(iris[,5])   # class information

## run Classical MDS
iris.cmds = cmds(idata, ndim=2)

## visualize
opar <- par(no.readonly=TRUE)
plot(iris.cmds$embed, col=icol, 
     main=paste0("STRESS=",round(iris.cmds$stress,4)))
par(opar)

}
\references{
\insertRef{torgerson_multidimensional_1952}{maotai}
}
