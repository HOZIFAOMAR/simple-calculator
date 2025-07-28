

                               

                                  // -----------------------------------------------
                                 // برنامج آلة حاسبة بسيطة بلغة C++
                                // المبرمج: حذيفة عمر
                               // التاريخ: 27 يوليو 2025
			      // العمر: 13 سنة
                             // -----------------------------------------------

                                    


#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;


void loadingAnimation(int repeatCount = 6) {
    string title = "Welcome to the C++ Calculator";
    cout << "\n\n\t\t";
    for (char c : title) {
        cout << c << flush;
        this_thread::sleep_for(milliseconds(50));
    }

    cout << "\n\n\t\t";

    for (int i = 0; i < repeatCount; ++i) {
        cout << "\r\t\tLoading" << string(i % 4, '.') << "   " << flush;
        this_thread::sleep_for(milliseconds(400));
    }


    cout << "\r\t\tMay the peace, blessings, and mercy of God be upon you";
    this_thread::sleep_for(milliseconds(2000));  // يفضل ظاهر ثانيتين
    system("cls");
}


void printHeader() {
    cout << "\n\n\t\t+----------------------------+\n";
    cout << "\t\t|     Simple Calculator      |\n";
    cout << "\t\t+----------------------------+\n\n";
}


void calculator() {
    double num1, num2;
    char op;

    while (true) {
        printHeader();
        cout << "\t\tEnter expression (e.g. 4 + 5): ";
        cin >> num1 >> op >> num2;

        cout << "\n\t\tResult: ";

        switch (op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/':
            if (num2 == 0)
                cout << "Error! Division by zero.";
            else
                cout << num1 / num2;
            break;
        default:
            cout << "Invalid operator!";
        }

        cout << "\n\n\t\tDo you want to calculate again? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            cout << "\n\t\tThanks for using the calculator!\n";
            break;
        }

        system("cls");
    }
}


int main() {
    loadingAnimation(20); // عدد مرات تكرار اللودينج
    calculator();
    return 0;
}




// هذا البرنامج هو آلة حاسبة بسيطة بلغة C++
// تعرض رسالة "Loading" مع تأثيرات جميلة قبل بدء الحسابات.
// يمكنك استخدامه كقاعدة لتطوير آلة حاسبة أكثر تعقيدًا في المستقبل.
// تم استخدام مكتبة <thread> و <chrono> لتأخير الرسائل
// وتم استخدام مكتبة <iomanip> لتنسيق الإخراج.
// تأكد من تشغيل البرنامج في بيئة تدعم C++14 أو أعلى.
// تم استخدام دالة system("cls") لمسح الشاشة في كل مرة
// يتم فيها عرض الواجهة الجديدة.
// يمكنك تعديل الرسائل والتنسيقات حسب رغبتك.
// تأكد من أن لديك بيئة تطوير C++ مناسبة لتشغيل هذا البرنامج.
// تم استخدام دالة loadingAnimation لعرض الرسالة المتحركة
// وتم استخدام دالة calculator لتنفيذ العمليات الحسابية.
// يمكنك إضافة المزيد من الميزات مثل دعم العمليات الحسابية المتقدمة 
// أو دعم العمليات الحسابية المتسلسلة.
// يمكنك أيضًا إضافة واجهة رسومية باستخدام مكتبات مثل Qt أو SFML
// إذا كنت ترغب في تطوير البرنامج بشكل أكبر.
// تأكد من اختبار البرنامج جيدًا قبل استخدامه في أي تطبيق حقيقي.
// يمكنك أيضًا إضافة ميزات مثل حفظ النتائج في ملف أو دعم العمليات الحسابية المعقدة.
// يمكنك استخدام هذا البرنامج كقاعدة لتطوير آلة حاسبة أكثر تعقيدًا في المستقبل.
// تأكد من أن لديك بيئة تطوير C++ مناسبة لتشغيل هذا البرنامج.
// يمكنك أيضًا إضافة ميزات مثل دعم العمليات الحسابية المتقدمة
// أو دعم العمليات الحسابية المتسلسلة.

