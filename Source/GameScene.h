//
//  GameScene.h
//  Crystals
//
//  Created by Viktor on 8/6/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@class Board;

@interface GameScene : CCNode
{
    long _frame;
}

+ (GameScene*) currentGameScene;

@property (nonatomic,readonly) CCSprite* refractionMap;
@property (nonatomic,readonly) CCSprite* reflectionMap;

@property (nonatomic,strong) Board* board;

@end
