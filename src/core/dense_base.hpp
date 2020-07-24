#ifndef __ATRIMXV2_DENSE_BASE_HPP__
#define __ATRIMXV2_DENSE_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class DenseBase
    {
    public:
        typedef typename internal::traits<Derived>::Scalar Scalar;
        typedef typename internal::add_const<typename internal::eval<Derived>::type>::type EvalReturnType;

        enum
        {
            Rows = internal::traits<Derived>::Rows,
            Cols = internal::traits<Derived>::Cols,
            Size = internal::array_size<Derived>::value
        };

        Derived &derived() { return *static_cast<Derived *>(this); }
        const Derived &derived() const { return *static_cast<const Derived *>(this); }

        inline int rows() { return derived().rows(); }
        inline int cols() { return derived().cols(); }

        bool is_zeros();
        bool is_ones();
        bool all();
        bool any();

        EvalReturnType eval() const;
        CommaInitializer<Derived> &operator<<(Scalar &s);
    };
} // namespace AtrimxV2

#endif