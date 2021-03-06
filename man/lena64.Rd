% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/lena64.R
\docType{data}
\name{lena64}
\alias{lena64}
\title{lena image at size of \eqn{(64 \times 64)}}
\format{
matrix of size \eqn{(64\times 64)}
}
\source{
\href{http://sipi.usc.edu/database/?volume=misc}{USC SIPI Image Database}
}
\usage{
data(lena64)
}
\description{
\emph{Lena} is probably one of the most well-known example in image processing and computer vision.
Well, here is a brief introduction on \href{http://www.cs.cmu.edu/~chuck/lennapg/lenna.shtml}{the story of Lena}.
}
\examples{
data(lena64)
image(lena64, col=gray((0:100)/100), axes=FALSE, main="lena64")
}
\references{
Gonzalez, Rafael C. and Woods, Richard E. (2017) \emph{Digital Image Processing} (4th ed.). ISBN 0133356728.
}
\keyword{datasets}
