#include "figures.h"


point::point(bool error) : x(INFINITY), y(INFINITY), z(INFINITY), valid(INVALID) {}

point::point(double _x, double _y, double _z) : x(_x), y(_y), z(_z), valid(true) {}

void point::set_coord(double _x, double _y, double _z) {
    x = _x;
    y = _y;
    z = _z;
}

void point::set_status(bool flag) {
    valid = flag;
}

std::array<double, 3> point::get_coord() const {
    return {x, y, z};
}

bool point::get_status() const {
    return valid;
}

point& point::operator+=(const point &other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

point &point::operator+=(const vector &other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

point& point::operator-=(const point &other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

point& point::operator-=(const vector &other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

point point::operator-() const { return {-x, -y, -z}; }

bool operator==(const point &first, const point &second) {
    if (first.x == INFINITY && first.y == INFINITY && first.z == INFINITY &&
        second.x == INFINITY && second.y == INFINITY && second.z == INFINITY) {
        return true;
    }
    return std::fabs(first.x - second.x) < 1e-6 &&
            std::fabs(first.y - second.y) < 1e-6 &&
            std::fabs(first.z - second.z) < 1e-6;
}

bool operator!=(const point &first, const point &second) {
    return !(first == second);
}

std::istream &operator>>(std::istream &is, point &instance) {
    std::string str;
    is >> str;
    sscanf(str.c_str(), "(%lf;%lf;%lf)", &instance.x, &instance.y, &instance.z);
    instance.valid = true;
    return is;
}

std::ostream &operator<<(std::ostream &os, const point &instance) {
    os << "(x: " << instance.x << "; y: " << instance.y << "; z: " << instance.z << ")";
    return os;
}

const std::string& point::determine_figure() const  { return name; }

point operator+(const point &first, const point &second) { return point(first) += second; }
point operator-(const point &first, const point &second) { return point(first) -= second; }
point operator+(const point &first, const vector &second) { return point(first) += second; }
point operator-(const point &first, const vector &second) { return point(first) -= second; }



vector::vector(bool error) : point(error) {}

vector::vector(double _x, double _y, double _z) : point(_x, _y, _z) {}

vector::vector(const point& A, const point& B) {
    x = B.x - A.x;
    y = B.y - A.y;
    z = B.z - A.z;
    valid = true;
}

double vector::get_length() const {
    return std::sqrt(x * x + y * y + z * z);
}

vector& vector::operator+=(const vector &other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

vector& vector::operator-=(const vector &other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

vector vector::operator-() const {
    return {-x, -y, -z};
}

bool operator==(const vector &first, const vector &second) {
    if (first.x == INFINITY && first.y == INFINITY && first.z == INFINITY &&
        second.x == INFINITY && second.y == INFINITY && second.z == INFINITY) {
        return true;
    }
    return std::fabs(first.x - second.x) < 1e-6 &&
            std::fabs(first.y - second.y) < 1e-6 &&
            std::fabs(first.z - second.z) < 1e-6;
}

bool operator!=(const vector &first, const vector &second) {
    return !(first == second);
}

double dot_product(const vector &first, const vector &second) {
    return first.x * second.x + first.y * second.y + first.z * second.z;
}

vector cross_product(const vector &first, const vector &second) {
    return {first.y * second.z - first.z * second.y,
            first.z * second.x - first.x * second.z,
            first.x * second.y - first.y * second.x};
}

double find_angel(const vector &first, const vector &second) {
    double alpha = std::acos(dot_product(first, second) / (first.get_length() * second.get_length()));
    return alpha > asin(1) ? 2 * asin(1) - alpha : alpha;
}

const std::string& vector::determine_figure() const { return name; }

vector operator+(const vector &first, const vector &second) { return vector(first) += second; }
vector operator-(const vector &first, const vector &second) { return vector(first) -= second; }



plate::plate(bool error) : equation(linear_equation(false)), valid(INVALID) {}

plate::plate(const point &M, const vector &A, const vector &B) {
    valid = true;
    vector normal = cross_product(A, B);


    if (normal == vector{0, 0, 0}) {
        std::cout << "Cannot build the plate!" << std::endl;
        new(this) plate(INVALID);
    }

    double d = -normal.x * M.x - normal.y * M.y - normal.z * M.z;
    equation = linear_equation(normal.x, normal.y, normal.z, d);
}

plate::plate(const point &A, const point &B, const point &C) : plate(A, vector(A, B), vector(A, C)) {}

plate::plate(const line &A, const line &B) : plate(A.a, vector(A.a, B.a), vector(A.a, B.b)) {
    if (dot_product(vector(A.a, A.b), cross_product(vector(A.a, B.a), vector(A.a, B.b))) != 0) {
        std::cout << "Cannot build the plate!" << std::endl;
        new(this) plate(INVALID);
    }
}

plate::plate(const line &L, const point &M) : plate(M, vector(M, L.a), vector(L.a, L.b)) {
    if (L.check_belonging(&M)) {
        std::cout << "Cannot build the plate!" << std::endl;
        new(this) plate(INVALID);
    }
}

plate::plate(double A, double B, double C, double D) : equation(linear_equation(A, B, C, D)), valid(true) {}

plate::plate(linear_equation eq) : equation(eq), valid(true) {}

void plate::set_equation(double A, double B, double C, double D) {
    equation = linear_equation(A, B, C, D);
}

void plate::set_equation(const linear_equation& func) {
    equation = linear_equation(func);
}
linear_equation plate::get_equation() const {
    return equation;
}

vector plate::get_normal() const {
    return {equation[0], equation[1], equation[2]};
}

point find_intersection(const plate &P, const line &L) {
    if (std::fabs(dot_product(vector(L.a, L.b), P.get_normal())) < 1e-6) {
        std::cout << "The line doesnt intersect the plate!" << std::endl;
        return point(INVALID);
    }
    auto tmp = L.get_classic_form();
    return find_solution({P.equation, tmp[0], tmp[1]});
}

line find_intersection(const plate &P1, const plate& P2) {
    auto tmp1 = linear_equation(P1.equation[0], P1.equation[1], P1.equation[2], 0);
    auto tmp2 = linear_equation(P2.equation[0], P2.equation[1], P2.equation[2], 0);
    if (!tmp1.check_lin_independent(tmp2)) {
        std::cout << "Plates dont intersect!" << std::endl;
        return line(INVALID);
    }

    std::array<linear_equation, 2> A = {P1.equation, P2.equation};
    auto pos = gauss_method(A);

    point dot = find_private_solution(A, pos[0], pos[1]);

    vector dir = find_fds(A, pos[0], pos[1]);

    return {dot, dir};
}

bool operator==(const plate &first, const plate &second) {
    if (first.equation == second.equation)
        return true;
    return false;
}

bool operator!=(const plate &first, const plate &second) { return !(first == second); }

std::istream &operator>>(std::istream &is, plate &instance) {
    is >> instance.equation;
    instance.valid = true;
    return is;
}

std::ostream &operator<<(std::ostream &os, const plate &instance) {
    os << instance.equation;
    return os;
}

bool plate::check_belonging(const figure* other) const {
    if (other->determine_figure() == "point") {
        auto dot = reinterpret_cast<const point*>(other);
        if (equation(*dot) == 0)
            return true;
    }
    if (other->determine_figure() == "vector") {
        auto v = reinterpret_cast<const vector*>(other);
        if (dot_product(*v, this->get_normal()) == 0)
            return true;
    }
    if (other->determine_figure() == "line") {
        auto l = reinterpret_cast<const line *>(other);
        if (equation((*l).a) == 0 && equation((*l).b) == 0)
            return true;
    }
    if (other->determine_figure() == "plate") {
        auto p = reinterpret_cast<const plate *>(other);
        if (*this == *p)
            return true;
    }
    return false;
}

const std::string& plate::determine_figure() const { return name; }

double find_angel(const plate &first, const plate &second) {
    return find_angel(first.get_normal(), second.get_normal());
}



line::line(bool error) : a(point(error)), b(point(error)), valid(INVALID) {}

line::line(const point &A, const vector &V) : a(A), b(A + V), valid(true) {}

line::line(const plate &P1, const plate &P2) {
    valid = true;
    auto L = find_intersection(P1, P2);
    if (L == line(false))
        new(this) line(false);
    a = L.a;
    b = L.b;
}

line::line(const point &A, const point &B) : a(A), b(B), valid(true) {}

void line::set_line(const point &A, const point &B) {
    a = A;
    b = B;
}

std::array<point, 2> line::get_points() const { return {a, b}; }

std::array<linear_equation, 2> line::get_classic_form() const {

    vector dir(a, b);
    std::array<linear_equation, 2> ret = {linear_equation(0, -dir.z, dir.y, dir.z * a.y - dir.y * a.z),
                                       linear_equation(dir.z, 0, -dir.x,  dir.x * a.z - dir.z * a.x)};
    return ret;
}

vector line::get_direct_vector() const { return vector(a, b); }

point find_intersection(const line &L1, const line &L2) {
    if (std::fabs(dot_product(vector(L1.a, L1.b), cross_product(vector(L1.a, L2.a), vector(L1.a, L2.b)))) > 1e-6) {
        std::cout << "The lines dont intersect!" << std::endl;
        return point(INVALID);
    }

    auto B = L2.get_classic_form();

    point x = find_intersection(plate(B[0]), L1);
    if (x == point(INVALID)) {
        x = find_intersection(plate(B[1]), L1);
        if (x == point(INVALID))
            std::cout << "The lines dont intersect!" << std::endl;
    }
    return x != point(INVALID) ? x : point(INVALID);
}

bool operator==(const line &first, const line &second) {
    if (first.a == point(INVALID) && first.b == point(INVALID) &&
        second.a == point(INVALID) && second.b == point(INVALID)) {
        return true;
    }
    auto A = first.get_classic_form();
    if (A[0](second.a) == 0 && A[0](second.b) == 0 && A[1](second.a) == 0 && A[1](second.b) == 0)
        return true;
    return false;
}

bool operator!=(const line &first, const line &second) { return !(first == second); }

std::istream &operator>>(std::istream &is, line &instance) {
    std::array<linear_equation, 2> inp{};
    is >> inp[0];
    is >> inp[1];
    instance = line(plate(inp[0]), plate(inp[1]));
    return is;
}

std::ostream &operator<<(std::ostream &os, const line &instance) {
    auto out = instance.get_classic_form();
    os << out[0];
    os << out[1];
    return os;
}


bool line::check_belonging(const figure* other) const {
    if (other->determine_figure() == "point") {
        auto dot = reinterpret_cast<const point*>(other);
        auto A = this->get_classic_form();
        if (std::fabs(A[0](*dot)) < 1e-6 && std::fabs(A[1](*dot)) < 1e-6)
            return true;
    }
    if (other->determine_figure() == "vector") {
        auto v = reinterpret_cast<const vector*>(other);
        if (cross_product(*v, vector(a, b)) == vector(0, 0, 0))
            return true;
    }
    if (other->determine_figure() == "line") {
        auto l = reinterpret_cast<const line *>(other);
        if (*l == *this)
            return true;
    }
    return false;
}

const std::string &line::determine_figure() const {
    return name;
}



linear_equation::linear_equation(bool error) : a(INFINITY), b(INFINITY), c(INFINITY), d(INFINITY) {}

linear_equation::linear_equation(double A, double B, double C, double D) : a(A), b(B), c(C), d(D) {}

void linear_equation::set(double A, double B, double C, double D) {
    a = A;
    b = B;
    c = C;
    d = D;
}

std::array<double, 4> linear_equation::get_coefficients() const {
    return {a, b, c, d};
}

std::function<bool(const point &)> linear_equation::get_equation() const {
    return {[=](const point& dot) -> double {
        auto coord = dot.get_coord();
        return a * coord[0] + b * coord[1] + c * coord[2] + d == 0;
    }};
}

bool linear_equation::check_lin_independent(const linear_equation &other) const {
    double k = other[0] / a;
    if (*this * k == other)
        return false;
    return true;
}

linear_equation& linear_equation::operator+=(const linear_equation &other) {
    a += other.a;
    b += other.b;
    c += other.c;
    d += other.d;
    return *this;
}

linear_equation &linear_equation::operator-=(const linear_equation &other) {
    a -= other.a;
    b -= other.b;
    c -= other.c;
    d -= other.d;
    return *this;
}

linear_equation& linear_equation::operator*=(double other) {
    a *= other;
    b *= other;
    c *= other;
    d *= other;
    return *this;
}

linear_equation& linear_equation::operator/=(double other) {
    a /= other;
    b /= other;
    c /= other;
    d /= other;
    return *this;
}

double linear_equation::operator()(const point& dot) const {
    auto coord = dot.get_coord();
    return a * coord[0] + b * coord[1] + c * coord[2] + d;
}

linear_equation linear_equation::operator-() const {
    return {-a, -b, -c, -d};
}

double linear_equation::operator[](int ind) const {
    switch (ind) {
        case 0:
            return a;
        case 1:
            return b;
        case 2:
            return c;
        case 3:
            return d;
        default:
            std::cout << "Segmentation fault!" << std::endl;
            break;
    }
    return NAN;
}

bool operator==(const linear_equation &first, const linear_equation &second) {
    if (first.a == INFINITY && first.b == INFINITY && first.c == INFINITY && first.d == INFINITY
        && second.a == INFINITY && second.b == INFINITY && second.c == INFINITY && second.d == INFINITY) {
        return true;
    }
    return std::fabs(first.a - second.a) < 1e-6 &&
            std::fabs(first.b - second.b) < 1e-6 &&
            std::fabs(first.c - second.c) < 1e-6 &&
            std::fabs(first.d - second.d) < 1e-6;
}

bool operator!=(const linear_equation &first, const linear_equation &second) {
    return !(first == second);
}

linear_equation operator+(const linear_equation& first, const linear_equation& second) {
    return linear_equation(first) += second;

}
linear_equation operator-(const linear_equation& first, const linear_equation& second) {
    return linear_equation(first) -= second;
}

linear_equation operator*(const linear_equation& first, double second) {
    return linear_equation(first) *= second;
}

linear_equation operator/(const linear_equation& first, double second) {
    return linear_equation(first) /= second;
}

std::istream &operator>>(std::istream &is, linear_equation &instance) {
    std::string str;
    is >> str;
    scanf(str.c_str(), "%lfx%lfy%lfz%lf=0", &instance.a, &instance.b, &instance.c, &instance.d);
    return is;
}

std::ostream &operator<<(std::ostream &os, const linear_equation &instance) {
    char var[] = "xyz";
    for (int i = 0; i < 4; i++) {
        if (std::fabs(instance[i]) < 1e-6)
            continue;
        os << (instance[i] > 1e-6 && i > 0 ? "+ " : "- ");
        if (std::fabs(instance[i]) != 1 || i == 3)
            os << std::fabs(instance[i]);
        if (i < 3)
            os << var[i];
        os << " ";
    }
    os << "= 0\n";
    return os;
}



point find_solution(const std::array<linear_equation, 3> &A) {
    double det = determinant(A);
    std::array<linear_equation, 3> tmp{};
    tmp[0].set(-A[0][3], A[0][1], A[0][2], A[0][3]);
    tmp[1].set(-A[1][3], A[1][1], A[1][2], A[1][3]);
    tmp[2].set(-A[2][3], A[2][1], A[2][2], A[2][3]);
    double del1 = determinant(tmp);
    tmp[0].set(A[0][0], -A[0][3], A[0][2], A[0][3]);
    tmp[1].set(A[1][0], -A[1][3], A[1][2], A[1][3]);
    tmp[2].set(A[2][0], -A[2][3], A[2][2], A[2][3]);
    double del2 = determinant(tmp);
    tmp[0].set(A[0][0], A[0][1], -A[0][3], A[0][3]);
    tmp[1].set(A[1][0], A[1][1], -A[1][3], A[1][3]);
    tmp[2].set(A[2][0], A[2][1], -A[2][3], A[2][3]);
    double del3 = determinant(tmp);
    return { del1 / det, del2 / det, del3 / det };
}

double determinant(const std::array<linear_equation, 3>& matrix) {
    return (matrix[0][0] * matrix[1][1] * matrix[2][2]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]) +
           (matrix[0][1] * matrix[1][2] * matrix[2][0]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]) +
           (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0]);
}

std::array<int, 2> gauss_method(std::array<linear_equation, 2> &A) {
    int pos1 = 0, pos2 = 0;
    while (std::fabs(A[0][pos1]) < 1e-6 && pos1 < 3) {
        pos1++;
    }

    A[0] /= A[0][pos1];
    A[1] -= A[0] * A[1][pos1];

    while (std::fabs(A[1][pos2]) < 1e-6 && pos2 < 3) {
        pos2++;
    }

    A[1] /= A[1][pos2];
    if (A[0][pos2] != 0) {
        A[0] -= A[1] * A[0][pos2];
    }
    return { pos1, pos2 };
}

point find_private_solution(std::array<linear_equation, 2> A, int pos1, int pos2) {
    if (pos1 > pos2) {
        std::swap(pos1, pos2);
        std::swap(A[0], A[1]);
    }

    if (pos1 == 0 && pos2 == 1) {
        return { (-A[0][2] + A[0][3]), (-A[1][2] + A[1][3]), 1 };
    }
    if (pos1 == 0 && pos2 == 2) {
        return { (-A[0][1] + A[0][3]), 1, (-A[1][1] + A[1][3]) };
    }
    if (pos1 == 1 && pos2 == 2) {
        return { 1, (-A[0][0] + A[0][3]), (-A[1][0] + A[1][3]) };
    }
    return point(INVALID);
}

vector find_fds(std::array<linear_equation, 2> A, int pos1, int pos2) {
    if (pos1 > pos2) {
        std::swap(pos1, pos2);
        std::swap(A[0], A[1]);
    }

    if (pos1 == 0 && pos2 == 1) {
        return { -A[0][2], -A[1][2], 1 };
    }
    if (pos1 == 0 && pos2 == 2) {
        return { -A[0][1], 1, -A[1][1] };
    }
    if (pos1 == 1 && pos2 == 2) {
        return { 1, -A[0][0], -A[1][0] };
    }
    return vector(INVALID);
}

double find_distance(const figure *first, const figure *second) {
    const figure* fig1 = first;
    const figure* fig2 = second;
    if ((first->determine_figure() == "line" && second->determine_figure() == "point") ||
        (first->determine_figure() == "plate" &&
        (second->determine_figure() == "point" || second->determine_figure() == "line"))) {
        std::swap(fig1, fig2);
    }

    if (fig1->determine_figure() == "point" && fig2->determine_figure() == "point") {
        auto a = reinterpret_cast<const point*>(fig1);
        auto b = reinterpret_cast<const point*>(fig2);
        return vector(*a, *b).get_length();
    }
    if (fig1->determine_figure() == "point" && fig2->determine_figure() == "line") {
        auto a = reinterpret_cast<const point*>(fig1);
        auto l = reinterpret_cast<const line*>(fig2);

        auto dir = vector(l->a, l->b);
        auto eq = linear_equation(-dir.x, -dir.y, -dir.z, dir.x * a->x + dir.y * a->y + dir.z * a->z);
        auto b = find_intersection(plate(eq), *l);
        if (b == point(INVALID))
            return NAN;
        return vector(*a, b).get_length();
    }
    if (fig1->determine_figure() == "point" && fig2->determine_figure() == "plate") {
        auto a = reinterpret_cast<const point*>(fig1);
        auto p = reinterpret_cast<const plate*>(fig2);

        auto n = p->get_normal();
        return std::fabs(a->x * n.x + a->y * n.y + a->z * n.z + p->equation[3]) / n.get_length();
    }
    if (fig1->determine_figure() == "line" && fig2->determine_figure() == "line") {
        auto l1 = reinterpret_cast<const line*>(fig1);
        auto l2 = reinterpret_cast<const line*>(fig2);

        if (find_intersection(*l1, *l2) != point(INVALID))
            return NAN;

        auto v = cross_product(vector(l1->a, l1->b), vector(l2->a, l2->b));
        double d = -(v.x * l2->a.x + v.y * l2->a.y + v.z * l2->a.z);
        return std::fabs(l1->a.x * v.x + l1->a.y * v.y + l1->a.z * v.z + d) / v.get_length();
    }
    if (fig1->determine_figure() == "line" && fig2->determine_figure() == "plate") {
        auto l = reinterpret_cast<const line*>(fig1);
        auto p = reinterpret_cast<const plate*>(fig2);

        if (find_intersection(*p, *l) != point(INVALID))
            return NAN;

        auto n = p->get_normal();
        return std::fabs(l->a.x * n.x + l->a.y * n.y + l->a.z * n.z + p->equation[3]) / n.get_length();
    }
    if (fig1->determine_figure() == "plate" && fig2->determine_figure() == "plate") {
        auto p1 = reinterpret_cast<const plate*>(fig1);
        auto p2 = reinterpret_cast<const plate*>(fig2);
        if (find_intersection(*p1, *p2) != line(INVALID) || *p1 == *p2)
            return NAN;

        linear_equation tmp = p1->equation;
        int i = std::fabs(tmp[0]) < 1e-6 ? 0 : std::fabs(tmp[1]) < 1e-6 ? 1 : 2;
        tmp = tmp * (p2->equation[i] / tmp[i]);
        return std::fabs(p2->equation[3] - tmp[3]) / p2->get_normal().get_length();
    }
    return NAN;
}

double find_angel(const line &first, const line &second) {
    return find_angel(first.get_direct_vector(), second.get_direct_vector());
}

double find_angel(const plate &first, const line &second) {
    return asin(1) - find_angel(first.get_normal(), second.get_direct_vector());
}