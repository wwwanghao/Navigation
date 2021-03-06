// ModuleFactory.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ModuleFactory.h"



// This is the constructor of a class that has been exported.
// see ModuleFactory.h for the class definition
CModuleFactory* CModuleFactory::m_pInstance = NULL;

CModuleFactory::CModuleFactory()
{
	m_pCameraController = new CCameraController();
	m_pConfigManager = new CConfigManager();
	m_pGraphManager = new CDXGraphManager();
	return;
}

CModuleFactory* CModuleFactory::GetInstance()
{
	if(m_pInstance != NULL)
	{
		return m_pInstance;
	}
	else
	{
		m_pInstance = new CModuleFactory;
		return m_pInstance;
	}
}

CCameraController * CModuleFactory::GetCameraController()
{
	return m_pCameraController;
}

CConfigManager * CModuleFactory::GetConfigManager()
{
	return m_pConfigManager;
}

CDXGraphManager * CModuleFactory::GetGraphManager()
{
	return m_pGraphManager;
}
