//
//  TopScale9Scene.cpp
//  Scale9Sprite
//
//  Created by MAEDAHAJIME on 2015/02/13.
//
//

#include "TopScale9Scene.h"
#include <ui/CocosGUI.h>
USING_NS_CC;     // cocos2d
using namespace ui;
//using namespace std; // String*

// _/_/_/ コンストラクタ プロパティー _/_/_/
TopScale9Scene::TopScale9Scene()
{
    
}

// MainScene デストラクタで解放 メモリーリークを防ぐ
TopScale9Scene::~TopScale9Scene()
{
    
}

// createSceneはLayerをSceneに貼り付けて返すクラスメソッドです。
// 自分自身(TopScale9Scene)を生成し、空のSceneに貼り付けて返す簡単な処理を行っているだけです。
// これでほかのシーンからの遷移が楽に行えます。
Scene* TopScale9Scene::createScene()
{
    
    auto scene = Scene::create();
    auto layer = TopScale9Scene::create();
    scene->addChild(layer);
    
    return scene;
}

bool TopScale9Scene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    // 画面サイズを取得
    Size winSize = Director::getInstance()->getVisibleSize();
    //マルチレゾリューション対応がどうとか
    Point origin = Director::getInstance()->getVisibleOrigin();
    
    // バックグランドカラー
    auto background = LayerColor::create(Color4B::BLUE,
                                         winSize.width,
                                         winSize.height);
    // バックグランドカラー 第2引数は表示順
    this->addChild(background, 0);
    
    /////////// setScale9 ///////////
    // ボタン生成
    Button *button = Button::create();
    // setScale9
    button->setScale9Enabled(true);
    // ボタンサイズ
    button->loadTextureNormal("button9.png");
    // ボタンサイズ（x:幅 y:高さ 数値で可変できる）
    button->setSize(Size(400,160));
    // タイトルテキスト
    button->setTitleText("Button");
    // フォントサイズ
    button->setTitleFontSize(80);
    // ボタン配置位置
    button->setPosition(Vec2(winSize.width / 2, winSize.height / 2));
    // ボタン表示
    addChild(button);
    
    return true;
}
