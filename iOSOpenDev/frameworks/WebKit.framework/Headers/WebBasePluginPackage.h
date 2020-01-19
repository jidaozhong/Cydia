/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : XXUnknownSuperclass {
@private
	NSMutableSet *pluginDatabases;	// 4 = 0x4
	String path;	// 8 = 0x8
	PluginInfo pluginInfo;	// 12 = 0xc
	RetainPtr<__CFBundle*> cfBundle;	// 36 = 0x24
	/*function-pointer*/ void *BP_CreatePluginMIMETypesPreferences;	// 40 = 0x28
}
+ (void)initialize;	// 0x3efd
+ (id)pluginWithPath:(id)path;	// 0x1f34d
+ (id)preferredLocalizationName;	// 0x3748d
- (id)initWithPath:(id)path;	// 0x1f5ad
- (void)unload;	// 0x37389
- (void)createPropertyListFile;	// 0x3738d
- (id)pListForPath:(id)path createFile:(BOOL)file;	// 0x373d5
- (id)_objectForInfoDictionaryKey:(id)infoDictionaryKey;	// 0x205e1
- (BOOL)getPluginInfoFromPLists;	// 0x1fac9
- (BOOL)load;	// 0x2431d
- (void)dealloc;	// 0x37441
- (void)finalize;	// 0x37635
- (const String *)path;	// 0x20bf5
- (const PluginInfo *)pluginInfo;	// 0x20c71
- (BOOL)supportsExtension:(const String *)extension;	// 0x375c9
- (BOOL)supportsMIMEType:(const String *)type;	// 0x20ec5
- (id)MIMETypeForExtension:(const String *)extension;	// 0x3754d
- (BOOL)isQuickTimePlugIn;	// 0x21159
- (BOOL)isJavaPlugIn;	// 0x212a5
- (BOOL)isNativeLibraryData:(id)data;	// 0x1f7c5
- (unsigned long)versionNumber;	// 0x37539
- (void)wasAddedToPluginDatabase:(id)pluginDatabase;	// 0x20c05
- (void)wasRemovedFromPluginDatabase:(id)pluginDatabase;	// 0x37515
- (String)bundleIdentifier;	// 0x21281
- (id).cxx_construct;	// 0x1f39d
- (void).cxx_destruct;	// 0x374b9
@end