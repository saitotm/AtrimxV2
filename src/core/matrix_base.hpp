#ifndef __ATRIMXV2_MATRIX_BASE_HPP__
#define __ATRIMXV2_MATRIX_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class MatrixBase : public DenseBase<Derived>
    {
        typedef typename internal::traits<Derived>::Scalar Scalar;

    public:
        Scalar norm() const;
        void &normalize();

        CwiseBinaryOp &operator+(const MatrixBase<Derived> &other) const;
        CwiseBinaryOp &operator-(const MatrixBase<Derived> &other) const;
    };
} // namespace AtrimxV2
#endif
