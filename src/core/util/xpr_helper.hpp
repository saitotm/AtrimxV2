#ifndef __ATRIMXV2_XPR_HELPER_HPP__
#define __ATRIMXV2_XPR_HELPER_HPP__

#include "meta.hpp"

namespace AtrimxV2
{
    namespace internal
    {
        template <typename Derived>
        struct array_size
        {
            enum
            {
                value = mult_int<traits<Derived>::Rows, traits<Derived>::Cols>::value
            };
        };

        template <typename T, typename XprKind = typename traits<T>::XprKind>
        struct xpr_base;

        template <typename Derived>
        struct xpr_base<Derived, MatrixXpr>
        {
            typedef MatrixBase<Derived> type;
        };

        template <typename Derived>
        struct xpr_base<Derived, ArrayXpr>
        {
            typedef ArrayBase<Derived> type;
        };

        template <typename T, typename BaseClassType = typename traits<T>::XprKind>
        struct plain_matrix_type;

        template <typename T>
        struct plain_matrix_type<T, MatrixXpr>
        {
            typedef Matrix<typename traits<T>::Scalar, traits<T>::Rows, traits<T>::Cols> type;
        };

        template <typename T>
        struct plain_matrix_type<T, ArrayXpr>
        {
            typedef Array<typename traits<T>::Scalar, traits<T>::Rows, traits<T>::Cols> type;
        };

        template <typename T>
        struct eval;

        template <typename Scalar_, int Rows_, int Cols_>
        struct eval<Matrix<Scalar_, Rows_, Cols_>>
        {
            typedef const Matrix<Scalar_, Rows_, Cols_>& type;
        };

        template <typename Scalar_, int Rows_, int Cols_>
        struct eval<Array<Scalar_, Rows_, Cols_>>
        {
            typedef const Array<Scalar_, Rows_, Cols_>& type;
        };
    } // namespace internal
} // namespace AtrimxV2

#endif