#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <Eigen/LU>
#include <Eigen/SVD>

using namespace Eigen;
using namespace std;

int main()
{
    Eigen::Quaterniond q1;
    Eigen::Quaterniond q2;

    q1.w() = 0.96103;
    q1.x() = -0.02726;
    q1.y() = -0.01015;
    q1.z() = -0.27489;

    q2.w() = 0.68673;
    q2.x() = -0.67238;
    q2.y() = -0.21366;
    q2.z() = -0.17510;

    Eigen::Quaterniond q = q1 * q2;

    cout << q.w() << endl;
    cout << q.x() << endl;
    cout << q.y() << endl;
    cout << q.z() << endl;

    // inverse 求出 q2
    q = q.inverse() * q1;

    cout << "\n\n";
    cout << q.w() << endl;
    cout << q.x() << endl;
    cout << q.y() << endl;
    cout << q.z() << endl;

    /*
     * Determine the inverse of q = [1 0 1 0]: 
     * qinv = quatinv([1 0 1 0]) 
     * qinv = 0.5000  0   -0.5000  0
     */

    Eigen::Quaterniond q3;
    q3.w() = 1; 
    q3.x() = 0;
    q3.y() = 1;
    q3.z() = 0;

    q3 = q3.inverse();
    cout << q3.w() << endl;
    cout << q3.x() << endl;
    cout << q3.y() << endl;
    cout << q3.z() << endl;

    cin.get();
    return 0;
}