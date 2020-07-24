#ifndef __ATRIMXV2_META_HPP__
#define __ATRIMXV2_META_HPP__

namespace AtrimxV2
{
    namespace internal
    {
        template <int X, int Y>
        struct mult_int
        {
            enum
            {
                value = X * Y
            };
        };

        template <typename T>
        struct add_const
        {
            typedef const T type;
        };
    } // namespace internal
} // namespace AtrimxV2

#endif
