#ifndef __ATRIMXV2_PLAIN_OBJECT_BASE_HPP__
#define __ATRIMXV2_PLAIN_OBJECT_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class PlainObjectBase
    {
        typedef typename internal::traits<Derived>::Scalar Scalar;

        Scalar *m_data;

    public:
        PlainObjectBase();

        inline int rows();
        inline int cols();
        Scalar &operator()(int row, int col);
        const Scalar &operator()(int row, int col) const;
        inline Scalar *data() { return m_data; }
        const Scalar &coeff(int row, int col) const;
        Scalar &coeffRef(int row, int col);
    };
} // namespace AtrimxV2

#endif
