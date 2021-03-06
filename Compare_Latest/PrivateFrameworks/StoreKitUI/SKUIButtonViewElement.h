//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElement, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement
{
    NSString *_badgeResourceName;
    SKUIViewElementText *_buttonText;
    int _buttonViewType;
    NSString *_confirmationText;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_variantIdentifier;
}

@property(readonly, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property(readonly, nonatomic) int buttonViewType; // @synthesize buttonViewType=_buttonViewType;
@property(readonly, nonatomic) SKUIViewElementText *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, nonatomic) NSString *badgeResourceName; // @synthesize badgeResourceName=_badgeResourceName;
- (void).cxx_destruct;
- (id)personalizationLibraryItems;
- (int)pageComponentType;
- (BOOL)isEnabled;
- (unsigned int)elementType;
- (id)description;
- (id)applyUpdatesWithElement:(id)arg1;
- (BOOL)canPerformLocalActionWithItemState:(id)arg1;
- (BOOL)canPersonalizeUsingItemState:(id)arg1;
@property(readonly, nonatomic) SKUIImageViewElement *buttonImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

