// 函数: sub_601f90
// 地址: 0x601f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0xe4)

if (result s> 0)
    result -= arg2
    *(arg1 + 0xe4) = result
    
    if (result s<= 0)
        int32_t edi_1 = *(arg1 + 0xe8)
        *(arg1 + 0xf0) = 0
        void* var_14_1 = arg1 + 0xf4
        
        if (edi_1 s> 0)
            result = sub_6dee00(arg1 + 0xf4, edi_1)
        else
            result = x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                arg1 + 0xf4)
        
        *(arg1 + 0xe4) = 0
        *(arg1 + 0xe8) = edi_1

return result
