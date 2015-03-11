/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrack, AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSString * displayName;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) NSLocale * locale;
@property(readonly) NSString * localizedDisplayName;
@property(readonly) NSArray * mediaSubTypes;
@property(readonly) NSString * mediaType;
@property(readonly) bool mpIsAC3;
@property(readonly) bool mpIsSDH;
@property(getter=isPlayable,readonly) bool playable;
@property(readonly) AVAssetTrack * track;
@property(readonly) int trackID;

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(bool)arg4;

- (id)_ancillaryDescription;
- (long long)_caseInsensitiveCompare:(id)arg1;
- (id)_extendedLanguageTagOrUndetermined;
- (id)_groupID;
- (id)_groupMediaType;
- (bool)_isAC3;
- (bool)_isDesignatedDefault;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(bool)arg2;
- (id)_title;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)associatedPersistentIDs;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)displayName;
- (id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(bool)arg2;
- (id)displayNameWithLocale:(id)arg1;
- (bool)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (id)group;
- (bool)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (bool)isPlayable;
- (id)locale;
- (id)localizedDisplayName;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (bool)mpIsAC3;
- (bool)mpIsSDH;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;
- (int)trackID;

@end