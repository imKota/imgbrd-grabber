#ifndef PAGE_TEST_H
#define PAGE_TEST_H

#include "test-suite.h"
#include "models/site.h"
#include "models/page.h"


class PageTest : public TestSuite
{
	Q_OBJECT

	private slots:
		void init();

		void testIncompatibleModifiers();
		void testLoadAbort();
		void testLoadTagsAbort();

	private:
		QSettings *m_settings;
		QList<Site*> m_sites;
		Site *m_site;
};

#endif // PAGE_TEST_H
