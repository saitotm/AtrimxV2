#ifndef __ATRIMXV2_MATRIX_HPP__
#define __ATRIMXV2_MATRIX_HPP__

namespace AtrimxV2
{
    namespace internal
    {
        template <typename Scalar_, int Rows_, int Cols_>
        struct traits<Matrix<Scalar_, Rows_, Cols_>>
        {
            typedef Scalar_ Scalar;
            typedef Rows_ Rows;
            typedef Cols_ Cols;

            typedef MatrixXpr XprType;
        };
    } // namespace internal

    template <typename Scalar_, int Rows_, int Cols_>
    class Matrix : public PlainObjectBase<Matrix<Scalar_, Rows_, Cols_>>
    {
        Matrix();
        int rows();
        int cols();

        template <typename OtherDerived>
        Matrix<Scalar_, Rows_, Cols_> operator=(const DenseBase<OtherDerived> &other);
    };
} // namespace AtrimxV2
#endif
