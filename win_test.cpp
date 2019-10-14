#include "afxwin.h" // MFC Основные и стандартные компоненты

class CMainWnd : public CFrameWnd
{
public:
	CMainWnd();
};

CMainWnd::CMainWnd()
{
	Create(NULL,"Step1",WS_OVERLAPPEDWINDOW,rectDefault,
		NULL,NULL);	// Создать окно программы
}

class CMyApp : public CWinApp
{
public:
	CMyApp();
	virtual BOOL InitInstance();
};

CMyApp::CMyApp() // конструктор главного класса приложения
{}

BOOL CMyApp::InitInstance() // стандартная инициализация
{
	m_pMainWnd=new CMainWnd();	// создать класс окна
	ASSERT(m_pMainWnd);	// проверить его правильность
	m_pMainWnd->ShowWindow(SW_SHOW);// Показать окно
	m_pMainWnd->UpdateWindow();	// Обновить окно
	return TRUE;		// Вернуть что все нормально
};

CMyApp theApp;	// запуск приложения