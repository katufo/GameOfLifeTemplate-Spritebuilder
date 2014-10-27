//
//  Creature.h
//  GameOfLife
//
//  Created by Karolet on 27/10/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

//ES:Propiedad que dice si esta la criatura viva o no
//EN store the current state of the creature
@property (nonatomic,assign) BOOL isAlive;

//ES guarda el numero de criaturas que viven
//EN store the amount of living neighbors
@property (nonatomic,assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
