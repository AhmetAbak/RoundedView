#ifndef RoundedView_hpp
#define RoundedView_hpp

#include "cocos2d.h"

class RoundedView : public cocos2d::ClippingNode {
private:
    void initOptions(float radius, const cocos2d::Size& size, cocos2d::Color4F color);
public:
    static RoundedView* create(float radius, const cocos2d::Size& size, cocos2d::Color4F color);
};


#endif /* RoundedView_hpp */
