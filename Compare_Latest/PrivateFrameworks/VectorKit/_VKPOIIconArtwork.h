/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKIconArtwork.h>

// Not exported
@interface _VKPOIIconArtwork : VKIconArtwork
{
    struct CGImage *_glyphImage;
    CDStruct_cf20f7af _style;
    double _contentScale;
}

- (id).cxx_construct;
- (void)_cleanUpAfterDrawing;
- (id)_newIcon;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithGlyph:(struct CGImage *)arg1 style:(CDStruct_cf20f7af *)arg2 contentScale:(double)arg3;

@end
