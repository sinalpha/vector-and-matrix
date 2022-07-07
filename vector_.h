class Vector{
    public:
        float x_, y_;

        Vector()
            : x_(0.0), y_(0.0)
        {}

        void assing(const float& _x, const float& _y)
        {
            x_ = _x;
            y_ = _y;
        }

        void print(){
            std::cout << x_ << " " << y_ << std::endl;
        }

        Vector& operator += (const Vector& input_vector){
            x_ += input_vector.x_;
            y_ += input_vector.y_;

            return *this;
        }

};