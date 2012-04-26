

/**
 * @file Test.hpp
 * @brief Tests - XSL
 * 
 * Contains the test functions for the XSL processor and HTML generator.
 * 
 * @author Benjamin PLANCHE
 */

# include <iostream>

using namespace std;

#include "XSLProcessor.hpp"

# include "../tests/TestFramework.hpp"

struct XSLProcessTest_NoXSLDTD : public TestCase
{
	XSLProcessTest_NoXSLDTD() : XSLProcessTest_NoXSLDTD("<fr> Vérifier que le traitement s'arrête en l'absence de DTD XSL") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct XSLProcessTest_NoHTMLDTD : public TestCase
{
	XSLProcessTest_NoHTMLDTD() : XSLProcessTest_NoHTMLDTD("<fr> Vérifier que le traitement s'arrête en l'absence de DTD HTML") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct XSLProcessTest_InvalidHTMLDTD : public TestCase
{
	XSLProcessTest_InvalidHTMLDTD () : XSLProcessTest_InvalidHTMLDTD ("<fr> Vérifier que le traitement s'arrête si la DTD HTML est invalide") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct XSLProcessTest_InvalidXSL : public TestCase
{
	XSLProcessTest_InvalidXSL() : XSLProcessTest_InvalidXSL("<fr> Vérifier que le traitement s'arrête si le XSL est invalide") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct XSLProcessTest_InvalidHTML : public TestCase
{
	XSLProcessTest_InvalidHTML() : XSLProcessTest_InvalidHTML("<fr> Vérifier que le traitement s'arrête si le HTML est invalide") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct XSLProcessTest_OK : public TestCase
{
	XSLProcessTest_OK() : XSLProcessTest_OK("<fr> Vérifier que la structure XSL générée correspond au document donné") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_NoXSL : public TestCase
{
	HTMLGenerationTest_NoXSL() : HTMLGenerationTest_NoXSL("<fr> Vérifier que la génération HTML s'arrête en l'absence de XSL") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_Simple : public TestCase
{
	HTMLGenerationTest_Simple() : HTMLGenerationTest_Simple("<fr> Vérifier le HTML généré, avec des documents XSL et XML simples") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_Complex : public TestCase
{
	HTMLGenerationTest_Complex() : HTMLGenerationTest_Complex("<fr> Vérifier le HTML généré, avec des documents XSL et XML plus complexes") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_ApplyTemplates : public TestCase
{
	HTMLGenerationTest_ApplyTemplates() : HTMLGenerationTest_ApplyTemplates("<fr> Vérifier le HTML généré, avec un XSL contenant des noeuds apply-templates") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_Attribute : public TestCase
{
	HTMLGenerationTest_Attribute() : HTMLGenerationTest_Attribute("<fr> Vérifier le HTML généré, avec un XSL contenant des noeuds attributes") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

struct HTMLGenerationTest_NoRoot : public TestCase
{
	HTMLGenerationTest_Complex() : HTMLGenerationTest_Complex("<fr> Vérifier le HTML généré, avec un XSL n'ayant pas de template pour la racine XML") {}
	bool operator()()
	{
		/** @todo Implement the test. */
		return true;
	}
};

int main(int argc, char** argv)
{
	TestSuite suite;
	
	suite.add(new XSLProcessTest_NoXSLDTD);

	suite.add(new XSLProcessTest_NoHTMLDTD);

	suite.add(new XSLProcessTest_InvalidHTMLDTD);

	suite.add(new XSLProcessTest_InvalidXSL);

	suite.add(new XSLProcessTest_InvalidHTML);

	suite.add(new XSLProcessTest_OK);

	suite.add(new HTMLGenerationTest_NoXSL);

	suite.add(new HTMLGenerationTest_Simple);

	suite.add(new HTMLGenerationTest_Complex);

	suite.add(new HTMLGenerationTest_ApplyTemplates);

	suite.add(new HTMLGenerationTest_Attribute);

	suite.add(new HTMLGenerationTest_NoRoot);
	
	suite.launch();
}



