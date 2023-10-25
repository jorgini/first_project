#ifndef LINEAR_FIGURES_H
#define LINEAR_FIGURES_H
#include <iostream>
#include <array>
#include <functional>
#include <cmath>

#define INVALID false


class figure {
public:
    virtual const std::string& determine_figure() const = 0;
};

class point;
class vector;
class plate;
class line;

struct linear_equation {
private:
    double a, b, c, d;

public:
    linear_equation() = default;
    explicit linear_equation(bool error);
    linear_equation(double A, double B, double C, double D);
    linear_equation(const linear_equation& other) = default;
    ~linear_equation() = default;

    void set(double A, double B, double C, double D);
    std::array<double, 4> get_coefficients() const;
    std::function<bool(const point&)> get_equation() const;
    bool check_lin_independent(const linear_equation& other) const;

    linear_equation& operator+=(const linear_equation& other);
    linear_equation& operator-=(const linear_equation& other);
    linear_equation& operator*=(double other);
    linear_equation& operator/=(double other);
    friend bool operator==(const linear_equation& first, const linear_equation& second);
    friend bool operator!=(const linear_equation& first, const linear_equation& second);
    linear_equation operator-() const;
    double operator()(const point& dot) const;
    double operator[](int ind) const;
    friend std::istream& operator>>(std::istream& is, linear_equation& instance);
    friend std::ostream& operator<<(std::ostream& os, const linear_equation& instance);
};

linear_equation operator+(const linear_equation& first, const linear_equation& second);
linear_equation operator-(const linear_equation& first, const linear_equation& second);
linear_equation operator*(const linear_equation& first, double second);
linear_equation operator/(const linear_equation& first, double second);


class point : protected figure {
protected:
    double x{}, y{}, z{};
    bool valid{};

    friend class vector;
    friend class plate;
    friend class line;

private:
    static inline const std::string name = "point";

public:
    point() = default;
    explicit point(bool error);
    point(double _x, double _y, double _z);
    point(const point& other) = default;
    ~point() = default;

    void set_coord(double _x, double _y, double _z);
    void set_status(bool flag);
    std::array<double, 3> get_coord() const;
    bool get_status() const;
    friend double find_distance(const figure* first, const figure* second);

    point& operator=(const point &other) = default;
    virtual point& operator+=(const point &other);
    virtual point& operator+=(const vector &other);
    point& operator-=(const point &other);
    virtual point& operator-=(const vector &other);

    point operator-() const;
    friend bool operator==(const point &first, const point &second);
    friend bool operator!=(const point &first, const point &second);
    friend std::istream& operator>>(std::istream& is, point& instance);
    friend std::ostream& operator<<(std::ostream& os, const point& instance);

protected:
    const std::string& determine_figure() const override;
};

point operator+(const point &first, const point &second);
point operator+(const point &first, const vector &second);
point operator-(const point &first, const point &second);
point operator-(const point &first, const vector &second);

class vector : public point {
private:
    static inline const std::string name = "vector";

    friend class plate;
    friend class line;

public:
    vector() = default;
    explicit vector(bool error);
    vector(double _x, double _y, double _z);
    vector(const point& A, const point& B);
    vector(const vector& other) = default;
    ~vector() = default;

    double get_length() const;
    friend double find_distance(const figure* first, const figure* second);

    vector& operator=(const vector &other) = default;
    vector& operator+=(const vector &other) override;
    vector& operator-=(const vector &other) override;
    vector operator-() const;
    friend bool operator==(const vector &first, const vector &second);
    friend bool operator!=(const vector &first, const vector &second);
    friend double dot_product(const vector &first, const vector &second);
    friend vector cross_product(const vector &first, const vector &second);

protected:
    const std::string& determine_figure() const override;
};

vector operator+(const vector &first, const vector &second);
vector operator-(const vector &first, const vector &second);
double find_angel(const vector &first, const vector &second);


class plate : protected figure {
private:
    linear_equation equation{};
    static inline const std::string name = "plate";
    bool valid;

    friend class line;

public:
    plate() = default;
    explicit plate(bool error);
    plate(const point& A, const point& B, const point& C);
    plate(const line& A, const line& B);
    plate(const point& M, const vector& A, const vector& B);
    plate (const line& L, const point& M);
    plate(double A, double B, double C, double D);
    plate(linear_equation eq);
    plate(const plate& other) = default;
    ~plate() = default;

    void set_equation(double A, double B, double C, double D);
    void set_equation(const linear_equation& func);
    linear_equation get_equation() const;
    vector get_normal() const;
    friend point find_intersection(const plate& P, const line& L);
    friend line find_intersection(const plate& P1, const plate& P2);
    friend double find_distance(const figure* first, const figure* second);

    friend bool operator==(const plate &first, const plate &second);
    friend bool operator!=(const plate &first, const plate &second);
    friend std::istream& operator>>(std::istream& is, plate& instance);
    friend std::ostream& operator<<(std::ostream& os, const plate& instance);

    bool check_belonging(const figure* other) const;

protected:
    const std::string& determine_figure() const override;
};

double find_angel(const plate &first, const plate &second);

class line : protected figure {
private:
    point a, b;
    static inline const std::string name = "line";
    bool valid;

    friend class plate;

public:
    line() = default;
    explicit line(bool error);
    line(const point& A, const point& B);
    line(const point& A, const vector& V);
    line(const plate& P1, const plate& P2);
    ~line() = default;

    void set_line(const point& A, const point& B);
    std::array<point, 2> get_points() const;
    std::array<linear_equation, 2> get_classic_form() const;
    vector get_direct_vector() const;
    friend point find_intersection(const line& L1, const line& L2);
    friend point find_intersection(const plate& P, const line& L);
    friend double find_distance(const figure* first, const figure* second);

    friend bool operator==(const line &first, const line &second);
    friend bool operator!=(const line &first, const line &second);
    friend std::istream& operator>>(std::istream& is, line& instance);
    friend std::ostream& operator<<(std::ostream& os, const line& instance);

    bool check_belonging(const figure* other) const;

protected:
    const std::string& determine_figure() const override;
};

double find_angel(const line &first, const line &second);

double find_angel(const plate &first, const line &second);

point find_solution(const std::array<linear_equation, 3>& A);

double determinant(const std::array<linear_equation, 3>&matrix);

std::array<int, 2> gauss_method(std::array<linear_equation, 2>& A);

point find_private_solution(std::array<linear_equation, 2> A, int pos1, int pos2);

vector find_fds(std::array<linear_equation, 2> A, int pos1, int pos2);

double find_distance(const figure* first, const figure* second);

#endif //LINEAR_FIGURES_H
