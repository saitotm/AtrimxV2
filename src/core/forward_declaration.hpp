#ifndef __ATRIMXV2_FORWARD_DECLARATION_HPP__
#define __ATRIMXV2_FORWARD_DECLARATION_HPP__

namespace AtrimxV2
{

    namespace internal
    {
        template <typename T>
        struct traits;
    }

    template <typename XprType>
    class CommaInitializer;

    template <typename Derived>
    class DenseBase;

    template <typename Derived>
    class MatrixBase;

    template <typename Derived>
    class ArrayBase;

    template <typename Derived>
    class PlainObjectBase;

    template <typename Scalar_, int Rows_, int Cols_>
    class Matrix;

    template <typename Scalar_, int Rows_, int Cols_>
    class Array;

    template <typename LhsType_, typename RhsType_>
    struct CwiseBinaryOp;
} // namespace AtrimxV2

#endif
