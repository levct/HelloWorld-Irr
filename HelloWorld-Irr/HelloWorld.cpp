#include "irrlicht.h"

/**
 * 在irrlicht引擎中，任何的东西都可以在irr的名称空间中找到
 */
using namespace irr;

int main(void)
{
	/**
	 * IrrlichtDevice是Irrlicht引擎中最重要的一个类，如果有指向此类的实例指针，就可以访问该引擎的所有内容。
	 * IrrlichtDevice的实例指针可以通过createDevie()或createDeviceEx()函数来获得。
	 * 在引擎中，如果有一个指向此类中	的实例指针，任何时候只应该有一个这个类的实例。
	 * 关于EDT_DIRECT3D9的功能在README.md文件中。
	 */
	IrrlichtDevice *device = createDevice(video::EDT_DIRECT3D9, core::dimension2d<u32>(640, 480), 16, false, false, false, 0);
	if (!device)
	{
		return 1;
	}

	video::IVideoDriver *driver = device->getVideoDriver();
	scene::ISceneManager * smgr = device->getSceneManager();
	gui::IGUIEnvironment *guienv = device->getGUIEnvironment();

	guienv->addStaticText(L"hello irrlicht engine", core::rect<s32>(10, 10, 260, 22), true);
	while (device->run())
	{
		driver->beginScene(true, true, video::SColor(255, 100, 101, 140));
		smgr->drawAll();
		guienv->drawAll();
		driver->endScene();
	}
	device->drop();
	return 0;
}