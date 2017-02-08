// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "regex"
#include "string"
#include "locale.h"

using namespace std;

void regex_gcc(string s, smatch &m) {
		
		//um regex para cada erro:

		regex e_1("(expected )" "(.*)" "( before )" "(.*)");
		regex e_2("(expected )" "(.*)" "( at )""(and )""(of )" "(input)");
		regex e_3("(.*)" "( was not declared in this scope)");
		regex e_4("(redeclaration of )" "(.*)");
		regex e_5("(.*)" "( previously declared here)");
		regex e_6("(lvalue required as left operand of assignment)");
		regex e_7("(.*)" "( does not name a type)");
		regex e_8("(.*)" "( is not captured)");
		regex e_9("(assignment of read-only variable )" "(.*)");
		regex e_10("(invalid operands of types 'float' and 'double.double.' to binary 'operator.')");
		regex e_11("(expected )" "(.*)" "( before )" "(.*)" "( token)");
		//as mensagens são checadas para testar em qual erro se encaixam

		if (regex_match(s, e_1)) {

			regex_search(s, m, e_1); //esse comando salva cada parte da mensagem em um indice de 'm'
			
			cout << "esperado " << m[2].str() << " antes de " << m[4].str() << endl;
		}
		else if (regex_match(s, e_2)) {

			regex_search(s, m, e_2);

			cout << "esperado " << m[2].str() << " no final da entrada" << endl;
		}
		else if (regex_match(s, e_3)) {

			regex_search(s, m, e_3);

			cout << m[1].str() << " não foi declarada neste escopo" << endl;
		}
		else if (regex_match(s, e_4)) {

			regex_search(s, m, e_4);

			cout << "Redeclaração de " << m[2].str() << endl;
		}
		else if (regex_match(s, e_5)) {

			regex_search(s, m, e_5);

			cout << m[1].str() << " declarado anteriormente aqui." << endl;
		}
		else if (regex_match(s, e_6)) {

			cout << "Variável exigida como operando à esquerda da atribuição" << endl;
		}
		else if (regex_match(s, e_7)) {

			regex_search(s, m, e_7);

			cout << m[1].str() << " não nomeia um tipo" << endl;
		}
		else if (regex_match(s, e_8)) {

			regex_search(s, m, e_8);

			cout << m[1].str() << " não é capturado" << endl;
		}
		else if (regex_match(s, e_9)) {

			regex_search(s, m, e_9);

			cout << "Atribuição da variável " << m[2].str() << " somente para leitura" << endl;
		}
		else if (regex_match(s, e_10)) {

			cout << "Operandos inválidos de tipos 'float' e 'double (double)' para operator-' binário" << endl;;
		}
		else if(regex_match(s, e_11)) {

			regex_search(s, m, e_11); 

			cout << "esperado " << m[2].str() << " antes do " << m[4].str() << " símbolo" << endl;
		}
}

void regex_borland(string s, smatch &m) {

	regex e_1("(.*)" "( statement missing )" "(.*)");
	regex e_2("(Undefined symbol )" "(.*)");
	regex e_3("(.*)" " (is assigned a value that is never used)");
	regex e_4("(Multiple declaration for )" "(.*)");
	regex e_5("(Earlier declaration of )" "(.*)");
	regex e_6("(Declaration syntax error)");
	regex e_7("(Expression syntax)");
	regex e_8("(Lvalue required)");
	regex e_9("(Unreachable code)");
	regex e_10("(.*)" "( expected)");
	regex e_11("(Declaration terminated incorrectly)");
	regex e_12("(Unexpected )" "(.*)");
	regex e_13("(Illegal use of floating point)");
	regex e_14("(Code has no effect)");
	regex e_15("(.*)""( statement must have )""(.*)");

	if (regex_match(s, e_1)) {

		regex_search(s, m, e_1); //esse comando salva cada parte da mensagem em um indice de 'm'

		cout << "Comando " << m[1].str() << " faltando " << m[3].str() << endl;
	}
	else if (regex_match(s, e_2)) {

		regex_search(s, m, e_2);

		cout << "Simbolo " << m[2].str() << " faltando"<<endl;
	}
	else if (regex_match(s, e_3)) {

		regex_search(s, m, e_3);

		cout << "Atribuído um valor para " << m[1].str() << " que nunca é usado" << endl;
	}
	else if (regex_match(s, e_4)) {

		regex_search(s, m, e_4);

		cout << "Múltiplas declarações para " << m[2].str() <<  endl;
	}
	else if (regex_match(s, e_5)) {

		regex_search(s, m, e_5);

		cout << "Declaração anterior de " << m[2].str() << endl;
	}
	else if (regex_match(s, e_6)) {

		cout << "Erro de sintaxe na declaração " << endl;
	}
	else if (regex_match(s, e_7)) {

		cout << "Sintaxe da expressão " <<  endl;
	}
	else if (regex_match(s, e_8)) {

		cout << "Variável exigida" << endl;
	}
	else if (regex_match(s, e_9)) {

		cout << "Código inacessível" << endl;
	}
	else if (regex_match(s, e_10)) {

		regex_search(s, m, e_10);

		cout << "Esperado " << m[1].str() << endl;
	}
	else if (regex_match(s, e_11)) {

		cout << "Declaração terminada incorretamente" << endl;
	}
	else if (regex_match(s, e_12)) {

		regex_search(s, m, e_12);

		cout << "inesperado " << m[2].str() << endl;
	}
	else if (regex_match(s, e_13)) {

		cout << "Uso ilegal do ponto flutuante" << endl;
	}
	else if (regex_match(s, e_14)) {

		cout << "Código sem efeito" << endl;
	}
	else if (regex_match(s, e_15)) {

		regex_search(s, m, e_15);

		cout << "Comando " << m[1].str() << " deve ter " << m[3].str() << endl;
	}
}

void regex_visual(string s, smatch &m) {

	regex e_1("(expected )" "(a[n]* )" "(.*)");
	regex e_2("(.*)" "(redefinition)");
	regex e_3("(syntax error: missing )" "(.*)" "( before )" "(.*)");
	regex e_4("(syntax error: identifier )" "(.*)");
	regex e_5("(missing type specifier . int assumed. Note: C.. does not support default.int)"); 
	regex e_6("(syntax error: )" "(.*)");
	regex e_7("(.*)" "(: undeclared identifier)");
	regex e_8("(identifier )" "(.*)" "(is undefined)");
	regex e_9("(expression must be a modifiable lvalue)");
	regex e_10("(.*)" "(: left operand must be l-value)");
	regex e_11("(illegal)" "(.*)" "(without matching )" "(.*)");
	regex e_12("(illegal )""(.*)");
	regex e_13("(.*)" "( missing function header .old-style formal list..)");
	regex e_14("(unexpected end-of-file found)");
	regex e_15("(cannot determine which instance of overloaded function )" "(.*)" "( is intended)");
	regex e_16("(.*)" "(: unable to resolve function overload)");
	regex e_17("(mismatch in formal parameter list)");
	regex e_18("(the left brace )" "(.*)" "( was unmatched at the end of the file)");
	regex e_19("(expected )" "(.*)");

	if (regex_match(s, e_1)) {

		regex_search(s, m, e_1); //esse comando salva cada parte da mensagem em um indice de 'm'

		cout << "Esperado uma " << m[3].str() << endl;
	}
	else if (regex_match(s, e_2)) {

		regex_search(s, m, e_2);

		cout << "Redefinição de "<< m[1].str() << endl;
	}
	else if (regex_match(s, e_3)) {

		regex_search(s, m, e_3);

		cout << "Erro de sintaxe: faltando " << m[2].str() << " antes de " << m[4].str() << endl;
	}
	else if (regex_match(s, e_4)) {

		regex_search(s, m, e_4);

		cout << "Erro de sintaxe: Identificador " << m[2].str() << endl;
	}
	else if (regex_match(s, e_5)) {

		cout << "Especificador de tipo ausente - int assumido. Nota: C++ int- não suporta padrão"  << endl;
	}
	else if (regex_match(s, e_6)) {

		regex_search(s, m, e_6);

		cout << "Erro de sintaxe: " << m[2].str() << endl;
	}
	else if (regex_match(s, e_7)) {

		regex_search(s, m, e_7);

		cout << m[1].str() << " identificador não declarado " << endl;
	}
	else if (regex_match(s, e_8)) {

		regex_search(s, m, e_8);

		cout << "identificador " << m[2].str() <<" é indefinido" << endl;
	}
	else if (regex_match(s, e_9)) {

		cout << "Expressão deve ser uma variável" << endl;
	}
	else if (regex_match(s, e_10)) {

		regex_search(s, m, e_10);

		cout <<  m[1].str() << " operando á esquerda deve ser uma variável" << endl;
	}
	else if (regex_match(s, e_11)) {

		regex_search(s, m, e_11);

		cout << "ilegal " << m[2].str() << " sem correspondência com  " << m[4].str() << endl;
	}
	else if (regex_match(s, e_12)) {

		regex_search(s, m, e_12);

		cout << m[2].str() << " ilegal" << endl;
	}
	else if (regex_match(s, e_13)) {

		regex_search(s, m, e_13);

		cout << m[1].str() << " cabeçalho de função ausente (lista formal no estilo antigo?)" << endl;
	}
	else if (regex_match(s, e_14)) {

		cout << "Inesperado fim-de-arquivo encontrado" << endl;
	}
	else if (regex_match(s, e_15)) {

		regex_search(s, m, e_15);

		cout << "Não pode determinar qual instância da função sobrecarregada "<< m[2].str() << " se destina" << endl;
	}
	else if (regex_match(s, e_16)) {

		regex_search(s, m, e_16);

		cout << m[1].str() << ": incapaz de resolver sobrecarga de função" << endl;
	}
	else if (regex_match(s, e_17)) {

		cout << "incompatibilidade na lista de parâmetros formal" << endl;
	}
	else if (regex_match(s, e_18)) {

		regex_search(s, m, e_18);

		cout << "O símbolo esquerda " << m[2].str() << " foi incomparável no final do arquivo" << endl;
	}
	else if (regex_match(s, e_19)) {

		regex_search(s, m, e_19);

		cout << "Esperado " << m[2].str() << endl;
	}

}

int main()
{

	string str;

	smatch ex;

	int op;

	setlocale(LC_ALL, "Portuguese");
	getline(cin, str);

	cout << "Escolha o compilador a ser utilizado:" << endl;
	cout << "Pressione 1 para o GCC." << endl << "Pressione 2 para Borland." << endl << "Pressione 3 para Visual C++." << endl;
	cin >> op;
	if (op == 1) {
		//a string 'str' recebe a mensagem
		cout << endl;
		regex_gcc(str, ex);
	}
	else if (op == 2) {
		cout << endl;
		regex_borland(str, ex);
		
	}
	else if (op == 3) {
		cout << endl;
		regex_visual(str, ex);
		
	}
	else {
		cout << "Opção inválida." << endl;
	}
	//a string 'str' recebe a mensagem
	/*getline(cin, str);
	switch (op) {
		case 1:
			
			cout << "Compilador GCC escolhido." << endl;
			
			regex_gcc(str, ex);
			break;
		case 2:
			cout << "Compilador Borland escolhido." << endl;
			break;
		case 3:
			cout<< "Compilador Visual C++ escolhido." << endl;
			break;
		default:
			cout << "Opção inválida." << endl;
	}*/
    return 0;
}

