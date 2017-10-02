#include <iostream>

using namespace std;

int main(){
	string mac = "64:31:50:43:08:31";
	unsigned int octets[6];

	int match = sscanf(mac.c_str(), "%x:%x:%x:%x:%x:%x", &octets[0], &octets[1], &octets[2], &octets[3], &octets[4], &octets[5]);

	string ret(6,0);
	for(int i=0; i< 6; i++){
		cout << octets[i] << endl;
		ret[i] = octets[i];
	}

	cout << ret << endl;

	unsigned int ver[6];
	for(int i=0; i< 6; i++){
		ver[i]=ret[i];
		cout << ver[i] << endl;
	}

	string emp = string();
	if(emp.empty()) cout << "indeed" << endl;

	/*string test(6,0);
	cout << test << test.size() << endl;

	for(int i=0; i< test.size(); i++){
		test[i] = 97;
	}
	cout << test << endl;*/

	return 0;
}
