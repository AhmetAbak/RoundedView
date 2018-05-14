#include "RoundedView.hpp"

USING_NS_CC;

RoundedView* RoundedView::create(float radius, const cocos2d::Size& size, cocos2d::Color4F color) {
    RoundedView* widget = new (std::nothrow) RoundedView();
    if (widget && widget->init()) {
        widget->initOptions(radius, size, color);
        widget->autorelease();
        return widget;
    }
    CC_SAFE_DELETE(widget);
    return nullptr;
}

void RoundedView::initOptions(float radius, const cocos2d::Size& size, cocos2d::Color4F color) {
    auto dn = DrawNode::create();
    dn->drawSolidRect(Vec2(radius, 0), Vec2(size.width - radius, size.height), color);
    dn->drawSolidRect(Vec2(0, radius), Vec2(radius, size.height - radius), color);
    dn->drawSolidRect(Vec2(size.width - radius, radius), Vec2(size.width, size.height - radius), color);
    dn->drawSolidCircle(Vec2(radius, radius), radius, 0.0f, 120, color);
    dn->drawSolidCircle(Vec2(size.width - radius, radius), radius, 0.0f, 120, color);
    dn->drawSolidCircle(Vec2(size.width - radius, size.height - radius), radius, 0.0f, 120, color);
    dn->drawSolidCircle(Vec2(radius, size.height - radius), radius, 0.0f, 120, color);
    this->setStencil(dn);

    auto lc = LayerColor::create(Color4B(color), size.width, size.height);
    addChild(lc, INT_MIN);

    setContentSize(size);
}
