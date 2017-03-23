#include "irrlicht.h"

/**
 * ��irrlicht�����У��κεĶ�����������irr�����ƿռ����ҵ�
 */
using namespace irr;

int main(void)
{
	/**
	 * IrrlichtDevice��Irrlicht����������Ҫ��һ���࣬�����ָ������ʵ��ָ�룬�Ϳ��Է��ʸ�������������ݡ�
	 * IrrlichtDevice��ʵ��ָ�����ͨ��createDevie()��createDeviceEx()��������á�
	 * �������У������һ��ָ�������	��ʵ��ָ�룬�κ�ʱ��ֻӦ����һ��������ʵ����
	 * ����EDT_DIRECT3D9�Ĺ�����README.md�ļ��С�
	 */
	IrrlichtDevice *device = createDevice(video::EDT_DIRECT3D9, core::dimension2d<u32>(640, 480), 16, false, false, false, 0);
	if (!device)
	{
		return 1;
	}

	/**
	 * IvideoDriver��Irrlicht��������Ҫ�Ľӿ�֮һ�����ܹ�ִ��2D��3Dͼ�ι��ܵ���������ӿڣ�
	 * �������е���Ⱦ�������������������ӿ���ɡ�
	 */
	video::IVideoDriver *driver = device->getVideoDriver();
	/**
	 * ISceneManager���������������������Ľڵ㡢������Դ������ͷ��������������
	 * ���еĳ����ڵ�ֻ�������ﴴ��
	 */
	scene::ISceneManager * smgr = device->getSceneManager();
	/**
	 * �ṩ��2D�û����滷���ķ��ʡ�
	 */
	gui::IGUIEnvironment *guienv = device->getGUIEnvironment();
	/**
	 * ��Ӿ�̬�ı�
	 */
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