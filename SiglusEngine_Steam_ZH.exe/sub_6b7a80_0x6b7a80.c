// 函数: sub_6b7a80
// 地址: 0x6b7a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6b73d0(*arg1)

if (result.b != 0)
    *arg1 = 0
    arg1[2] = 0
    arg1[3] = 0
    result = sub_6b7280(result, arg2, arg1, arg3)
    
    if (result.b != 0 && sub_6b7820(result, FILE_END, *arg1, nullptr, nullptr).b != 0)
        int32_t* edi_1 = *arg1
        sub_6b95c0()
        void* eax
        int32_t edx_2
        
        if (edi_1 != 0)
            eax, edx_2 = sub_74a122(edi_1)
        else
            eax, edx_2 = sub_6b7970()
        
        int32_t* ecx_3 = *arg1
        arg1[3] = edx_2
        arg1[2] = eax
        return sub_6b7820(eax, FILE_BEGIN, ecx_3, nullptr, nullptr) != 0

result.b = 0
return result
