/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
{
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (id)layerRefAtIndex:(unsigned int)arg1;
- (id)layerNames;
- (unsigned int)numberOfLayers;
- (_Bool)isOpen;
- (struct CGRect)bounds;
- (_Bool)isLayerGroup;
- (void)dealloc;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;

@end

