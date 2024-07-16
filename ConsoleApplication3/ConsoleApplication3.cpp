
#include <iostream>

using namespace std;

int main() {
	cout << "Seirin adi:Senin Guluslerin\n";
	cout << "Qarsimda nazlanib yene gulursen,\n";
	cout << "Bilsen guluslerin neye benzeyir?\n";
	cout << "Men desem artiqdir, ozun bilirsen,\n";
	cout << "Lale yarmaginda sehe benzeyir.\n";
	cout << "\t\t\t\tMikayil Musfiq,";
}
int main() {
	cout << "____________________________";
	cout << "|Pers Pisik balasi satilir |";
	cout << "|2Ayliqdir                 |";
	cout << "|Terbiyelidir              |";
	cout << "|Qiymet:250azn             |";
	cout << "|Tel:050-211-11-11         |";
	cout << "|__________________________|";
}
int main() {
	double R1;
	cout << "R1:  ";
	cin >> R1;

	double R2;
	cout << "R2:  ";
	cin >> R2;

	double R3;
	cout << "R3:  ";
	cin >> R3;

	double R0 = (R1 * R2 * R3) / (R1 * R2 + R1 * R3 + R3 * R2);
	cout << "R0:";
	cout << R0 << endl;
}
int main() {
	double L;
	cout << "dairenin uzunlugu : ";
	cin >> L;
	double p = 3.14;
	double r = L / 2 / p;
	double S = r * r * p;
	cout << "daireenin sahesi = " << S << endl;

}
int main() {
	double v;
	cout << "masinin sureti: ";
	cin >> v;

	double a;
	cout << "masinin tecili:";
	cin >> a;

	double t;
	cout << "masin zamanla neceyle surub:  ";
	cin >> t;
	double s = v * t + (a * t * t) / 2;
	cout << "Qet etdiyi mesafe: " << s << endl;
}
int main() {

	double t1;
	cout << "Ne qeder vaxta qet etmelidir:";
	cin >> t1;
	double s2;
	cout << "ne qeder yol getmelidir:";
	cin >> s2;
	cout << "Lazim olacaq suret:" << s2 / t1 << endl;
}