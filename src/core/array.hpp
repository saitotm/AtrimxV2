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

            typedef ArrayXpr XprKind;

            enum
            {
                Rows = Rows_,
                Cols = Cols_
            };
        };
    } // namespace internal

    template <typename Scalar_, int Rows_, int Cols_>
    class Array : public PlainObjectBase<Array<Scalar_, Row_, Cols_>>
    {
    public:
        // inline int const rows() { return Rows_; }
        // inline int const cols() { return Cols_; }
    };
} // namespace AtrimxV2

#endif
