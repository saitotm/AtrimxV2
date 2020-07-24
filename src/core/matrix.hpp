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

            enum
            {
                Rows = Rows_,
                Cols = Cols_
            };

            typedef MatrixXpr XprKind;
        };
    } // namespace internal

    template <typename Scalar_, int Rows_, int Cols_>
    class Matrix : public PlainObjectBase<Matrix<Scalar_, Rows_, Cols_>>
    {
    public:
        typedef PlainObjectBase<Matrix> Base;
        Matrix() : Base()
        {
        }

        Matrix(const Matrix &other) : Base(other) {}

        template <typename OtherDerived>
        Matrix(const DenseBase<OtherDerived> &other) : Base(other.derived()) {}

        template <typename OtherDerived>
        inline Matrix &operator=(const DenseBase<OtherDerived> &other)
        {
            return Base::operator=(other);
        }
    };
} // namespace AtrimxV2
#endif
