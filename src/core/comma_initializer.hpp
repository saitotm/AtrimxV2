#ifndef __ATRIMXV2_COMMA_INITIALIZER_HPP__
#define __ATRIMXV2_COMMA_INITIALIZER_HPP__

namespace AtrimxV2
{
    template <typename XprType>
    class CommaInitializer
    {
        typedef XprType::Scalar Scalar;

    public:
        CommaInitializer &
        operator<<(const CommaInitializer &other);
        CommaInitializer &operator<<(const Scalar &s);
    };
    template <typename Derived>
    CommaInitializer<Derived> &DenseBase<Derived>::operator<<(const Scalar &s);
} // namespace AtrimxV2

#endif