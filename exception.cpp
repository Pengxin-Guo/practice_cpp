/*************************************************************************
	> File Name: exception.cpp
	> Author: gpx
	> Mail: 1457495424@qq.com
	> Created Time: 2019年01月18日 星期五 14时24分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // 严格匹配
    try{
        throw 1;
    } catch(char c) {
        cout << "catch(char c) " << c << endl;
    } catch(short s) {
        cout << "catch(char c) " << s << endl;
    } catch(double d) {
        cout << "catch(double d) " << d << endl;
    } catch (int i) {
        cout << "catch(int i) " << i << endl;
    } catch (...) {
        cout << "catch(...)" << endl;
    }
    return 0;
}
