/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ECUtils.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface ECUtils : XXUnknownSuperclass {
}
+ (BOOL)isRenameFunction:(id)function;	// 0x258f89
+ (id)renameFunction:(id)function;	// 0x258f51
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x258989
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x2589b9
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x258a41
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0xf1d09
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x1e89f5
@end

@interface ECUtils (Private)
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x258aa5
@end