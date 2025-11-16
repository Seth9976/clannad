// 函数: sub_602490
// 地址: 0x602490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg4

if (edi s< 0)
    edi = 0

*(arg1 + 0xf0) = 0

if (edi != 0)
    *(arg1 + 0xe4) = edi
    *(arg1 + 0xe8) = arg3
    return arg3

void* var_14 = arg1 + 0xf4
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (arg3 s> 0)
    eax = sub_6dee00(arg1 + 0xf4, arg3)
else
    eax = x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
        arg1 + 0xf4)

if (arg2 != 0)
    eax = sub_602510(arg1, 0, 0)

*(arg1 + 0xe8) = arg3
*(arg1 + 0xe4) = edi
return eax
