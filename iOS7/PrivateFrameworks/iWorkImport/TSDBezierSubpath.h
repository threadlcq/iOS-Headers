/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, TSDBezierNode, TSDBezierPath;

// Not exported
@interface TSDBezierSubpath : NSObject
{
    NSMutableArray *mNodes;
    _Bool mClosed;
}

@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=mClosed;
@property(retain, nonatomic) NSMutableArray *nodes; // @synthesize nodes=mNodes;
- (void)convertToHobby;
- (id)splitEdgeAtIndex:(unsigned long long)arg1;
- (void)addNodesToArray:(id)arg1;
@property(readonly, nonatomic) _Bool closeIfEndpointsAreEqual;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (id)insertNodeAtPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
@property(readonly, nonatomic) _Bool canDeleteSelectedNodes;
- (void)removeNode:(id)arg1;
@property(readonly, nonatomic) _Bool hasSelectedNode;
@property(readonly, nonatomic) _Bool allNodesSelected;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)addNode:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)reverseDirection;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)arg1;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(_Bool)arg2;
@property(readonly, nonatomic) TSDBezierPath *bezierPath;
- (_Bool)isCircular;
@property(readonly, nonatomic) _Bool isRectangular;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
