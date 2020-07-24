#ifndef __ATRIMXV2_CWISE_OP_HPP__
#define __ATRIMXV2_CWISE_OP_HPP__

namespace AtrimxV2
{
    namespace internal
    {
        template <typename LhsType_, typename RhsType_>
        struct traits<CwiseBinaryOp<LhsType_, RhsType_>>
        {
            enum
            {
                Rows = traits<LhsType_>::Rows,
                Cols = traits<LhsType_>::Cols
            };
            typedef traits<LhsType_>::XprKind XprKind;
        };
    } // namespace internal

    template <typename LhsType_, typename RhsType_>
    struct CwiseBinaryOpImpl
        : public internal::xpr_base<CwiseBinaryOp<LhsType_, RhsType_>>::type
    {
    };

    template <typename LhsType_, typename RhsType_>
    struct CwiseBinaryOp : public CwiseBinaryOpImpl<LhsType_, RhsType_>
    {
    public:
        inline int rows() { return Rows; }
        inline int cols() { return Cols; }
    };

} // namespace AtrimxV2
#endif
