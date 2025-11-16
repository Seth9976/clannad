// 函数: sub_6b8980
// 地址: 0x6b8980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int32_t var_8_1 = 0

if (arg2 s<= 0x8000ffff)
    if (arg2 == 0x8000ffff)
        sub_52e820(arg1, u"E_UNEXPECTED")
        return arg1
    
    if (arg2 + 0x7fffbfff u<= 4)
        switch (arg2)
            case 0x80004001
                sub_52e820(arg1, u"E_NOTIMPL")
                return arg1
            case 0x80004002
                sub_52e820(arg1, u"E_NOINTERFACE")
                return arg1
            case 0x80004003
                sub_52e820(arg1, u"E_POINTER")
                return arg1
            case 0x80004004
                sub_52e820(arg1, u"E_ABORT")
                return arg1
            case 0x80004005
                sub_52e820(arg1, u"E_FAIL")
                return arg1
else
    switch (arg2)
        case 0
            sub_52e820(arg1, u"S_OK")
            return arg1
        case 1
            sub_52e820(arg1, u"S_FALSE")
            return arg1
        case 0x80040110
            sub_52e820(arg1, u"CLASS_E_NOAGGREGATION")
            return arg1
        case 0x80040154
            sub_52e820(arg1, u"REGDB_E_CLASSNOTREG")
            return arg1
        case 0x80070005
            sub_52e820(arg1, u"E_ACCESSDENIED")
            return arg1
        case 0x80070006
            sub_52e820(arg1, u"E_HANDLE")
            return arg1
        case 0x8007000e
            sub_52e820(arg1, u"E_OUTOFMEMORY")
            return arg1
        case 0x80070057
            sub_52e820(arg1, u"E_INVALIDARG")
            return arg1

sub_52e820(arg1, &data_ad93bc)
return arg1
