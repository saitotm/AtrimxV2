namespace AtrimxV2
{
    namespace internal
    {

        template <typename T>
        struct add_const
        {
            typedef const T type;
        };

        template <typename T, typename XprKind = traits<T>::XprKind>
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

        template <typename T, typename BaseClassType = traits<T>::XprKind>
        struct plain_matrix_type;

        template <typename T>
        struct plain_matrix_type<T, MatrixXpr>
        {
            typedef Matrix<traits<T>::Scalar, traits<T>::Rows, traits<T>::Cols> type;
        };

        template <typename T>
        struct plain_matrix_type<T, ArrayXpr>
        {
            typedef Array<traits<T>::Scalar, traits<T>::Rows, traits<T>::Cols> type;
        };

        template <typename T>
        struct eval;

        template <typename Scalar_, int Rows_, int Cols_>
        struct eval<Matrix<Scalar_, Rows_, Cols_>>
        {
            typedef const typename Matrix<Scalar_, Rows_, Cols_> &type;
        };

        template <typename Scalar_, int Rows_, int Cols_>
        struct eval<Array<Scalar_, Rows_, Cols_>>
        {
            typedef const typename Array<Scalar_, Rows_, Cols_> &type;
        };
    } // namespace internal
} // namespace AtrimxV2