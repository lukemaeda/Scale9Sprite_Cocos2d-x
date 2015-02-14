//
//  TopScale9Scene.h
//  Scale9Sprite
//
//  Created by MAEDAHAJIME on 2015/02/13.
//
//

#ifndef __Scale9Sprite__TopScale9Scene__
#define __Scale9Sprite__TopScale9Scene__

#include "cocos2d.h"
USING_NS_CC;

class TopScale9Scene :public Layer
{
protected:
    // コンストラクタ
    TopScale9Scene();
    // デストラクタ
    virtual ~TopScale9Scene();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(TopScale9Scene);
};


#endif /* defined(__Scale9Sprite__TopScale9Scene__) */
