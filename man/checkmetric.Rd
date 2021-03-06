% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/checkmetric.R
\name{checkmetric}
\alias{checkmetric}
\title{Check for Metric Matrix}
\usage{
checkmetric(d)
}
\arguments{
\item{d}{\code{"dist"} object or \eqn{(N\times N)} matrix of pairwise distances.}
}
\value{
a logical; \code{TRUE} if it satisfies metric property, \code{FALSE} otherwise.
}
\description{
This function checks whether the distance matrix \eqn{D:=d_{ij} = d(x_i, x_j)} satisfies 
four axioms to make itself a semimetric, which are (1) \eqn{d_{ii} = 0}, (2) \eqn{d_{ij} > 0} for \eqn{i\neq j}, 
(3) \eqn{d_{ij} = d_{ji}}, and (4) \eqn{d_{ij} \leq d_{ik} + d_{kj}}.
}
\examples{
## Let's use L2 distance matrix of iris dataset
data(iris)
dx = as.matrix(stats::dist(iris[,1:4]))

# perturb d(i,j) 
dy = dx  
dy[1,2] <- dy[2,1] <- 10

# run the algorithm
checkmetric(dx)
checkmetric(dy)

}
\seealso{
\code{\link{checkdist}}
}
