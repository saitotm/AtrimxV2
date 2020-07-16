#ifndef __ATRIMXV2_ARRAY_HPP__
#define __ATRIMXV2_ARRAY_HPP__

namespace AtrimxV2
{
    namespace internal
    {
        template <typename Scalar_, int Rows_, int Cols_>
        struct traits<Array<Scalar_, Rows_, Cols_>>
        {
            typedef Scalar_ Scalar;
            typedef Rows_ Rows;
            typedef Cols_ Cols;

            typedef ArrayXpr XprType;
        }
    } // namespace internal

    template <typename Scalar_, int Rows_, int Cols_>
    class Array : public PlainObjectBase<Array<Scalar_, Row_, Cols_>>
    {
    };
} // namespace AtrimxV2

#endif
