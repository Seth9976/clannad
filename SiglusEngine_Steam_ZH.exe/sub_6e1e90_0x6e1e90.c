// 函数: sub_6e1e90
// 地址: 0x6e1e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int32_t var_8_1 = 0

if (arg2 s<= 0x8878000a)
    switch (arg2)
        case 0x80004001
            sub_52e820(arg1, u"DSERR_UNSUPPORTED")
            return arg1
        case 0x80004002
            sub_52e820(arg1, u"DSERR_NOINTERFACE")
            return arg1
        case 0x80004005
            sub_52e820(arg1, u"DSERR_GENERIC")
            return arg1
        case 0x80040110
            sub_52e820(arg1, u"DSERR_NOAGGREGATION")
            return arg1
        case 0x8007000e
            sub_52e820(arg1, u"DSERR_OUTOFMEMORY")
            return arg1
        case 0x80070057
            sub_52e820(arg1, u"DSERR_INVALIDPARAM")
            return arg1
        case 0x8878000a
            sub_52e820(arg1, u"DSERR_ALLOCATED")
            return arg1
else if (arg2 + 0x7787ffe2 u<= 0x8c)
    switch (arg2)
        case 0x8878001e
            sub_52e820(arg1, u"DSERR_CONTROLUNAVAIL")
            return arg1
        case 0x88780032
            sub_52e820(arg1, u"DSERR_INVALIDCALL")
            return arg1
        case 0x88780046
            sub_52e820(arg1, u"DSERR_PRIOLEVELNEEDED")
            return arg1
        case 0x88780064
            sub_52e820(arg1, u"DSERR_BADFORMAT")
            return arg1
        case 0x88780078
            sub_52e820(arg1, u"DSERR_NODRIVER")
            return arg1
        case 0x88780082
            sub_52e820(arg1, u"DSERR_ALREADYINITIALIZED")
            return arg1
        case 0x88780096
            sub_52e820(arg1, u"DSERR_BUFFERLOST")
            return arg1
        case 0x887800a0
            sub_52e820(arg1, u"DSERR_OTHERAPPHASPRIO")
            return arg1
        case 0x887800aa
            sub_52e820(arg1, u"DSERR_UNINITIALIZED")
            return arg1

sub_6b8980(arg1, arg2)
return arg1
