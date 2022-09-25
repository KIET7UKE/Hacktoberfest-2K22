Complex operator+(const Complex & X, const Complex & Y) {
    Complex Z {X.a + Y.a, X.b + Y.b};
    return Z;
}

ostream & operator<< (ostream & out, const Complex & X) {
    if (X.b < 0) {
        out << X.a << "-i" << -X.b;
    } else if(X.b > 0) {
        out << X.a << "+i" << X.b;
    } else {
        out << X.a;
    }
    return out;
}