#ifndef __ATRIMXV2_PLAIN_OBJECT_BASE_HPP__
#define __ATRIMXV2_PLAIN_OBJECT_BASE_HPP__

namespace AtrimxV2
{
    template <typename Derived>
    class PlainObjectBase : public internal::xpr_base<Derived>::type
    {
    public:
        typedef typename internal::traits<Derived>::Scalar Scalar;

        typedef typename internal::xpr_base<Derived>::type Base;
        using Base::Cols;
        using Base::Rows;
        using Base::Size;

        inline int rows() const { return Rows; }
        inline int cols() const { return Cols; }
        //inline Scalar *data() { return m_data; }
        inline const Scalar &coeff(int row, int col) const { return m_data[cols() * row + col]; }
        inline Scalar &coeffRef(int row, int col) { return m_data[cols() * row + col]; }
        inline Scalar &operator()(int row, int col) { return coeffRef(row, col); }
        inline const Scalar &operator()(int row, int col) const { return coeff(row, col); }

        void random(const Scalar &min, const Scalar &max, const int &seed)
        {
            std::mt19937 mt(seed);
            std::uniform_real_distribution<> rand(min, max);
            for (int i = 0; i < rows(); i++)
                for (int j = 0; j < cols(); j++)
                        coeffRef(i, j) = rand(mt);
        }

    protected:
        PlainObjectBase()
        {
            m_data = new Scalar[Size];
            for (int i = 0; i < rows(); i++)
                for (int j = 0; j < cols(); j++)
                    coeffRef(i, j) = 0;
        }
    
    private:
        Scalar *m_data;
    };
} // namespace AtrimxV2

#endif
