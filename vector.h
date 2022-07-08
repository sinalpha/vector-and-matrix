class Vector2D{
    public:
        float x_, y_;

        Vector2D()//생산자
            : x_(0.0), y_(0.0)// 콜론 초기화
        {}

        void assing(const float& _x, const float& _y) //참조에 의한 전달
        {
            x_ = _x;
            y_ = _y;
        }

        void print()
        {
            std::cout << x_ << " "  << y_ << std::endl;
        }

        Vector2D& operator += (const Vector2D& v_input){//연산자 오버로딩
            
            x_ += v_input.x_;
            y_ += v_input.y_;
            return *this;
        }

        Vector2D& operator *=(const float scalar){
            x_ *= scalar;
            y_ *= scalar;
            return *this;
        }

        Vector2D& operator *=(const Vector2D& v_input){
            x_ *= v_input.x_;
            y_ *= v_input.y_;
            return *this;
        }

};      