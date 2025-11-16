// 函数: sub_5ff990
// 地址: 0x5ff990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0xbc)

if (result s> 0)
    result -= arg2
    *(arg1 + 0xbc) = result
    
    if (result s<= 0)
        result = *(arg1 + 0xd4)
        int32_t edi_1 = *(arg1 + 0xc0)
        *(arg1 + 0xc5) = 0
        
        if (result s>= 0)
            int32_t* ecx_1 = result * 0x15c + *(arg1 + 0xc8)
            int32_t* var_14_1 = ecx_1
            
            if (edi_1 s> 0)
                result = sub_6dee00(ecx_1, edi_1)
            else
                result = x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
                    ecx_1)
        
        *(arg1 + 0xbc) = 0
        *(arg1 + 0xc0) = edi_1

return result
