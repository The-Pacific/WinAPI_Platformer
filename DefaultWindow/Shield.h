#pragma once
#include "Obj.h"
class CShield : public CObj
{
public:
	CShield();
	virtual ~CShield();

public:
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render(HDC hDC) override;
	virtual void Release() override;
	virtual void OnColision(CObj* Oppnent) override;
	virtual void OnColisionEX(CObj* Oppnent, INVADEDIRC Direc, float invadesize) override;
};

