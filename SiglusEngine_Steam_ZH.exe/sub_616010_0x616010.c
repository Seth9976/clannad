// 函数: sub_616010
// 地址: 0x616010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct _EXCEPTION_REGISTRATION_RECORD** eax = data_bac4a0

if (eax[0x1d] == 0)
    int32_t ecx
    ecx.b = 1
    int32_t edx_1
    eax, edx_1 = sub_614c70(ecx.b)
    
    if (eax.b != 0)
        int32_t eax_2 = *data_bac4e4
        
        if (eax_2 == 0)
            edx_1.b = 1
            sub_6152f0(nullptr, edx_1.b)
            int32_t eax_3 = sub_614e40()
            data_bac400 -= 1
            return eax_3
        
        if (eax_2 == 2)
            edx_1.b = 1
            sub_615520(nullptr, edx_1.b)
            int32_t eax_4 = sub_614e40()
            data_bac400 -= 1
            return eax_4
        
        if (eax_2 == 1)
            sub_6157c0(eax_2, edx_1, nullptr, 0)
        
        eax = sub_614e40()
        data_bac400 -= 1

return eax
