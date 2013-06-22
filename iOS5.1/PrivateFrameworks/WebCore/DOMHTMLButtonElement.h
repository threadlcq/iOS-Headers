/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement
{
}

@property(readonly, retain) DOMHTMLFormElement *form;
- (id)formAction;
- (void)setFormAction:(id)arg1;
- (id)formEnctype;
- (void)setFormEnctype:(id)arg1;
- (id)formMethod;
- (void)setFormMethod:(id)arg1;
- (BOOL)formNoValidate;
- (void)setFormNoValidate:(BOOL)arg1;
- (id)formTarget;
- (void)setFormTarget:(id)arg1;
- (id)validity;
@property(copy) NSString *accessKey;
@property BOOL disabled;
@property BOOL autofocus;
@property(copy) NSString *name;
@property(readonly, copy) NSString *type;
@property(copy) NSString *value;
@property(readonly) BOOL willValidate;
- (id)validationMessage;
- (id)labels;
- (BOOL)checkValidity;
- (void)setCustomValidity:(id)arg1;
- (void)click;

@end
