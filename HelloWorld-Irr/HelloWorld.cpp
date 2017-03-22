#include "irrlicht.h"

using namespace irr;

int main(void)
{
	IrrlichtDevice *device = createDevice(video::EDT_SOFTWARE, core::dimension2d<u32>(640, 480), 16, false, false, false, 0);
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