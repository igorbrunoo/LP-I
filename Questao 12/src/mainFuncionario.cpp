#include "pessoa.h"
#include "funcionario.h"
#include "gerente.h"
#include "assistenteadministrativo.h"
#include "assistentetecnico.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Gerente g("Igor", 21, 1.80, "2018001", 2000);
    AssistenteAdministrativo f("José", 19, 1.60, "2018002", 2000, "Noite", 200);
    AssistenteTecnico a("João", 25, 1.75, "2018003", 1500, &g, 170);

    cout << g << endl;
    cout << endl;
    cout << f << endl; 
    cout << endl;
    cout << a << endl;

    system("PAUSE");

    return 0;
}