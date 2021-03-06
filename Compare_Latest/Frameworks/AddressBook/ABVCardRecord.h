//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABVCardRecord : NSObject
{
    void *_record;
    struct __CFArray *_properties;
}

+ (BOOL)includePhotosInVCards;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeREVInVCards;
+ (void)setIncludeREVInVCards:(BOOL)arg1;
+ (BOOL)includeNotesInVCards;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (BOOL)vcardFieldisPrivate:(id)arg1;
+ (void)clearPrivateFields;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (BOOL)privateVCardEnabled;
+ (struct __CFArray *)supportedProperties;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3 includePrivateData:(BOOL)arg4;
- (void)_appendPropValue:(id)arg1 forExternalPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4;
- (BOOL)_usesArrayForExternalPropKey:(id)arg1;
- (id)_prodID;
- (id)imageData;
- (BOOL)useThumbnailImageFormatIfAvailable;
- (id)_21vCardRepresentationAsData;
- (id)_realCompositeName;
- (id)alternateName;
- (id)_fullName;
- (BOOL)_isCompany;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)encodedDataForValue:(id)arg1 charsetName:(id *)arg2;
- (id)encodedLineForValue:(id)arg1;
- (id)dataForSoundProperty:(void *)arg1;
- (id)_typeParameterForToneType:(id)arg1;
- (id)_dictionaryForActivityAlerts;
- (void)_addPersonSounds:(void *)arg1 identifier:(int)arg2 toActivityAlerts:(id *)arg3 activity:(id)arg4 alert:(id)arg5;
- (id)_valueForPersonSounds:(void *)arg1 identifier:(int)arg2;
- (id)dataForInstantMessageProperties;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)dataForSocialProfileProperty:(void *)arg1 groupCount:(int *)arg2;
- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;
- (id)propertyLineForIMPPProperty:(BOOL)arg1 groupCount:(int *)arg2;
- (id)propertyLineForInstantMessageHandles:(BOOL)arg1 groupCount:(int *)arg2;
- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(BOOL)arg3 groupCount:(int *)arg4;
- (void *)valueForProperty:(unsigned int)arg1;
- (void *)copyValueForProperty:(unsigned int)arg1;
- (id)stringFromAlternateBirthday:(id)arg1;
- (id)stringForAlternateBirthdayComponent:(id)arg1 key:(id)arg2 format:(id)arg3;
- (id)ISO8061StringFromDateTime:(id)arg1;
- (id)ISO8061StringFromDate:(id)arg1;
- (id)newISO8061StringFromDate:(id)arg1;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (struct __CFString *)_vCardKeyForEmailLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (struct __CFString *)_vCardKeyForGenericLabel:(id)arg1;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(BOOL)arg2;
- (BOOL)_showField:(unsigned int)arg1 identifier:(int)arg2;
- (BOOL)_showField:(unsigned int)arg1;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)record;
- (id)vCardRepresentationForMode:(int)arg1;
- (void)dealloc;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)init;
- (id)initWithRecord:(void *)arg1;

@end

