// 函数: sub_5ffda0
// 地址: 0x5ffda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg4

if (edi s< 0)
    edi = 0

*(arg1 + 0xc5) = 0

if (edi != 0)
    *(arg1 + 0xbc) = edi
    *(arg1 + 0xc0) = arg3
    return arg3

struct _EXCEPTION_REGISTRATION_RECORD** eax = *(arg1 + 0xd4)

if (eax s>= 0)
    int32_t* ecx_1 = eax * 0x15c + *(arg1 + 0xc8)
    int32_t* var_14_1 = ecx_1
    
    if (arg3 s> 0)
        eax = sub_6dee00(ecx_1, arg3)
    else
        eax = x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
            ecx_1)

if (arg2 != 0)
    eax = sub_5ffe30(arg1, 0, 0)

*(arg1 + 0xc0) = arg3
*(arg1 + 0xbc) = edi
return eax
