/*  
 * InheritMain.h
 *
 * Created by Rect on 2014-5-30 16:11.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/

struct CInheritSecond
{
	virtual void onThirdCall() = 0;
};

struct CInheritFirst
{
	virtual void onFirstCall() = 0;

	virtual void onSecondCall() = 0;
};



class CInheritMain:
	public CInheritFirst,public CInheritSecond
{
public:
	CInheritMain(void);
	~CInheritMain(void);

	virtual void onFirstCall();
	virtual void onSecondCall();
	virtual void onThirdCall();
};

