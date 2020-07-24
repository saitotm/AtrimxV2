#ifndef __ATRIMXV2_IO_HPP__
#define __ATRIMXV2_IO_HPP__

namespace AtrimxV2
{
    namespace internal
    {
        constexpr int kDigits = 8;

        template <typename Derived>
        std::ostream &print_matrix(std::ostream &os, Derived &m)
        {
            int width = 0;
            for (int i = 0; i < m.rows(); i++)
            {
                for (int j = 0; j < m.cols(); j++)
                {
                    std::stringstream sstr;
                    sstr << m.coeff(i, j);
                    width = std::max<int>(width, sstr.str().length());
                }
            }

            os << "[";
            for (int i = 0; i < m.rows(); i++)
            {
                os.width(width);
                os << m.coeff(i, 0);
                for (int j = 1; j < m.cols(); j++)
                {
                    os << ", ";
                    os.width(width);
                    os << m.coeff(i, j);
                }
                if (i < m.rows() - 1)
                    os << std::endl << " ";
            }
            os << "]";
            os << std::defaultfloat;

            return os;
        }
    } // namespace internal

    template <typename Derived>
    std::ostream &operator<<(std::ostream &os, const DenseBase<Derived> &other)
    {
        return internal::print_matrix(os, other.derived());
    }
} // namespace AtrimxV2

#endif