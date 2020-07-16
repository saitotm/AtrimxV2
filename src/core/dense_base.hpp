#ifndef __ATRIMXV2_DENSE_BASE_HPP__
#define __ATRIMXV2_DENSE_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class DenseBase
    {
    public:
        typedef typename internal::traits<Derived>::Scalar Scalar;
        typedef typename internal::add_const<internal::eval<Derived>::type>::type EvalReturnType;

        int rows();
        int cols();

        bool is_zeros();
        bool is_ones();
        bool all();
        bool any();

        EvalReturnType eval() const;
        CommaInitializer<Derived> &operator<<(Scalar &s);
    };
    template <typename Derived>
    std::ostream &operator<<(std::ostream &os, const DenseBase<Derived> &other) const;
} // namespace AtrimxV2

#endif