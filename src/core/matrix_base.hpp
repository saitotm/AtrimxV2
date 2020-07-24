#ifndef __ATRIMXV2_MATRIX_BASE_HPP__
#define __ATRIMXV2_MATRIX_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class MatrixBase : public DenseBase<Derived>
    {
    public:
        typedef typename internal::traits<Derived>::Scalar Scalar;

        typedef DenseBase<Derived> Base;
        using Base::Cols;
        using Base::Rows;
        using Base::Size;

        using Base::cols;
        using Base::derived;
        //using Base::eval;
        using Base::rows;
        /*
        using Base::operator+=;
        using Base::operator-=;
        using Base::operator*=;
        using Base::operator/=;
        */

        Scalar norm() const;
        void normalize();

        template <typename OtherDerived>
        CwiseBinaryOp<Derived, OtherDerived> &operator+(const MatrixBase<OtherDerived> &other) const;

        template <typename OtherDerived>
        CwiseBinaryOp<Derived, OtherDerived> &operator-(const MatrixBase<OtherDerived> &other) const;

    protected:
        MatrixBase() : Base() {}
    };
} // namespace AtrimxV2
#endif
