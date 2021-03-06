// ******************************************************************
// *
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : xbox.h
// *
// * note : XBox Kernel Declarations
// *
// ******************************************************************
#ifndef XBOX_H
#define XBOX_H

// ******************************************************************
// * AvGetSavedDataAddress
// ******************************************************************
XBSYSAPI EXPORTNUM(1) PVOID NTAPI AvGetSavedDataAddress();

// ******************************************************************
// * AvSendTVEncoderOption
// ******************************************************************
XBSYSAPI EXPORTNUM(2) VOID NTAPI AvSendTVEncoderOption
(
    IN  PVOID   RegisterBase,
    IN  ULONG   Option,
    IN  ULONG   Param,
    OUT ULONG   *Result
);

// ******************************************************************
// * AvSetDisplayMode
// ******************************************************************
XBSYSAPI EXPORTNUM(4) ULONG NTAPI AvSetDisplayMode
(
    IN PVOID    RegisterBase,
    IN ULONG    Step,
    IN ULONG    Mode,
    IN ULONG    Format,
    IN ULONG    Pitch,
    IN ULONG    FrameBuffer
);

// ******************************************************************
// * AvSetSavedDataAddress
// ******************************************************************
XBSYSAPI EXPORTNUM(4) VOID NTAPI AvSetSavedDataAddress
(
    IN PVOID    Address
);

// ******************************************************************
// * FscGetCacheSize
// ******************************************************************
XBSYSAPI EXPORTNUM(35) DWORD NTAPI FscGetCacheSize();

XBSYSAPI VOID *FscInvalidateIdleBlocks;

// ******************************************************************
// * FscSetCacheSize
// ******************************************************************
XBSYSAPI EXPORTNUM(37) LONG NTAPI FscSetCacheSize(ULONG uCachePages);

XBSYSAPI VOID *KdDebuggerEnabled;
XBSYSAPI VOID *KdDebuggerNotPresent;

// ******************************************************************
// * KfRaiseIrql
// ******************************************************************
XBSYSAPI EXPORTNUM(160) UCHAR NTAPI KfRaiseIrql
(
    IN UCHAR    NewIrql
);

// ******************************************************************
// * KfLowerIrql
// ******************************************************************
XBSYSAPI EXPORTNUM(161) UCHAR NTAPI KfLowerIrql
(
    IN UCHAR    NewIrql
);

XBSYSAPI VOID *KiBugCheckData;
XBSYSAPI VOID *KiUnlockDispatcherDatabase;

// ******************************************************************
// * LaunchDataPage (actually a pointer)
// ******************************************************************
XBSYSAPI EXPORTNUM(164) PLAUNCH_DATA_PAGE LaunchDataPage;

XBSYSAPI VOID *PhyGetLinkState;
XBSYSAPI VOID *PhyInitialize;

// ******************************************************************
// * XboxEEPROMKey
// ******************************************************************
XBSYSAPI EXPORTNUM(321) UCHAR XboxEEPROMKey[16];

// ******************************************************************
// * XboxHardwareInfo
// ******************************************************************
XBSYSAPI EXPORTNUM(322) XBOX_HARDWARE_INFO XboxHardwareInfo;

// ******************************************************************
// * XboxHDKey
// ******************************************************************
XBSYSAPI EXPORTNUM(323) UCHAR XboxHDKey[16];

typedef struct _XBOX_KRNL_VERSION {
    USHORT Major;
    USHORT Minor;
    USHORT Build;
    USHORT Qfe;
} XBOX_KRNL_VERSION;

XBSYSAPI EXPORTNUM(324) XBOX_KRNL_VERSION XboxKrnlVersion;

// ******************************************************************
// * XboxSignatureKey
// ******************************************************************
XBSYSAPI EXPORTNUM(325) BYTE XboxSignatureKey[16];

XBSYSAPI EXPORTNUM(326) OBJECT_STRING XeImageFileName;
XBSYSAPI EXPORTNUM(327) NTSTATUS NTAPI XeLoadSection(void* section);
XBSYSAPI EXPORTNUM(328) NTSTATUS NTAPI XeUnloadSection(void* section);

// ******************************************************************
// * XcSHAInit
// ******************************************************************
XBSYSAPI EXPORTNUM(335) VOID NTAPI XcSHAInit(UCHAR *pbSHAContext);

// ******************************************************************
// * XcSHAUpdate
// ******************************************************************
XBSYSAPI EXPORTNUM(336) VOID NTAPI XcSHAUpdate(UCHAR *pbSHAContext, UCHAR *pbInput, ULONG dwInputLength);

// ******************************************************************
// * XcSHAFinal
// ******************************************************************
XBSYSAPI EXPORTNUM(337) VOID NTAPI XcSHAFinal(UCHAR *pbSHAContext, UCHAR *pbDigest);

XBSYSAPI VOID *XcRC4Key;
XBSYSAPI VOID *XcRC4Crypt;
XBSYSAPI VOID *XcHMAC;
XBSYSAPI VOID *XcPKEncPublic;
XBSYSAPI VOID *XcPKDecPrivate;
XBSYSAPI VOID *XcPKGetKeyLen;
XBSYSAPI VOID *XcVerifyPKCS1Signature;
XBSYSAPI VOID *XcModExp;
XBSYSAPI VOID *XcDESKeyParity;
XBSYSAPI VOID *XcKeyTable;
XBSYSAPI VOID *XcBlockCrypt;
XBSYSAPI VOID *XcBlockCryptCBC;
XBSYSAPI VOID *XcCryptService;
XBSYSAPI VOID *XcUpdateCrypto;
XBSYSAPI VOID *XboxLANKey;
XBSYSAPI VOID *XboxAlternateSignatureKeys;
XBSYSAPI VOID *XePublicKeyData;
XBSYSAPI VOID *IdexChannelObject;
XBSYSAPI VOID *xsnprintf;     // prefixed with "x" to avoid xlibc collisions
XBSYSAPI VOID *xsprintf;      // ""
XBSYSAPI VOID *xvsnprintf;    // ""
XBSYSAPI VOID *xvsprintf;     // ""

#endif


