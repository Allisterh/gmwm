# gmwm 0.13.0

This is the first general release of the Generalized Method of Wavelet Moments (GMWM) R package. The package is meant to act as a platform for studying wavelets and for using the GMWM estimator.

## Highlights

* High performing C++ routines to calculate wavelets, gmwm estimator, and more!
* Inference and Model Selection for state-space models (SSM).
* Straightforward model specification of latent time series processes via natural input.
* Two different modeling modes:
  * `imu` to model inertial measurement units.
  * `ssm` to model state-space models.
* Graphical features that enable the exploration of the Wavelet Variance and GMWM Estimation results.

## Generalized Method of Wavelet Moments (GMWM) 

* Efficient implementation of GMWM estimation techniques for latent time series.
* Obtain results for time series with over two million observations in under 1.5 seconds!
* Effortlessly obtain initial starting values with a new grid search algorithm or use your own. 
* Switch between different weighting matrices (e.g. `approx`,`bootstrap`,`asymptotic`)

## Decomposition Methods

* The decomposition of process is available in three different C++ functions.
    * Discrete Wavelet Transform (DWT)
    * Maximal Overlap Discrete Wavelet Transform (MODWT)
    * Allan Variance (AVAR)
* Support for the following Daubechies wavelets:
    * d2 - Haar filter
* Extendable filter collection
    * Support a pull request to add a new filter! 

## Wavelet Variance

* Calculate the Wavelet Variance for a set of data underneath the Haar wavelet filter with either robust or classical techniques.
* Visualize the Wavelet Variance with `plot(wvar(x))`
* Compare the results of wavelet variances using `compare.wvar()`

## Time Series Processed Model Syntax

* New model syntax that enables users to quickly specify models via `ts.model` S3 object.
* Specify models with initial starting parameters or let the built in grid search algorithm guess initial parameter values.
    * `AR1()` creates an AR1 modeling component with the program set to guess initial values.
    * `AR1(phi = .3, sigma2 = 1)` creates an AR1 modeling component with user supplied initial values.
* Support exists for:
    * Autoregressive order 1 (`AR1(phi,sigma2)`)
    * Normal White Noise (`WN(sigma2)`)
    * Random Walk (`RW(sigma2)`)
    * Quantization Noise (`QN(q2)`)
    * Moving Averages of order Q (`MA(q)`)
    * Autoregressive of order P (`AR(p)`)
    * Autoregressive - Moving Averages of orders P,Q (`ARMA(p,q,sigma2)`)
* Chain different processes together through the use of the plus operator
    * E.g. `mod = AR1() + WN()` or `mod = AR1(phi = .9, sigma2 = 1) + WN(sigma2 = .1)
* Repeat processes through the use of the times operator
    * E.g. `mod = 3*AR1()`

## Process Generation

* Computationally sound algorithms for generating:
   * Autoregressive - moving averages (`ARMA`)
   * Autoregressive processes of Order 1, P (`AR1` or `AR`)
   * Moving Averages of Order Q (`MA`)
   * Normal White Noise (`WN`)
   * Random Walk (`RW`)
   * Quantization Noise (`QN`)
* Quick generation of latent processes via `gen.gts(model, N)`

## Latent Time Series Demonstration

* See how different time series processes combine together via `demo.lts()`.


## Support
Primary support for this project was made possible by the Department of Statistics at the University of Illinois at Urbana-Champaign (UIUC). Furthermore, the contributions of undergraduate researcher Wenchao Yang for improving the visualization systems was supported, in part, by a grant from the Office of Undergraduate Research at UIUC. The project was mentored by Prof. Stephane Guerrier. 