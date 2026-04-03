#include <Geode/Geode.hpp>
#include <Geode/ui/OverlayManager.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init(){
		if (!MenuLayer::init()) {
			return false;
		}
		auto winSize = CCDirector::get()->getWinSize();
		auto scene = OverlayManager::get();

		auto sprite = CCSprite::create("watermark.png"_spr);
		sprite->setPosition({ winSize.width / 2, winSize.height / 2 });
		scene->addChild(sprite);
		sprite->retain();

		return true;
	}
};