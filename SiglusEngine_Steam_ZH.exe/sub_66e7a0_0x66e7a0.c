// 函数: sub_66e7a0
// 地址: 0x66e7a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result_2 = arg2
int32_t var_8 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(result_2 - 1)
int32_t result = (eax_1 - edx) s>> 1
int32_t result_1 = result

if (arg4 s< result_2)
    do
        void* edi_3 = result * 0x30 + arg3
        int32_t* eax_3
        
        if (arg5[5] u< 8)
            eax_3 = arg5
        else
            eax_3 = *arg5
        
        int32_t var_1c_1 = arg5[4]
        result = sub_536340(edi_3, arg3, *(edi_3 + 0x10), eax_3)
        
        if (result s>= 0)
            break
        
        int32_t* esi_2 = result_2 * 0x30 + var_8
        
        if (esi_2 != edi_3)
            sub_52e3c0(esi_2, edi_3, 0, 0xffffffff)
        
        if (&esi_2[6] != edi_3 + 0x18)
            sub_52e3c0(&esi_2[6], edi_3 + 0x18, 0, 0xffffffff)
        
        result_2 = result_1
        arg3 = var_8
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(result_1 - 1)
        result = (eax_6 - edx_1) s>> 1
        result_1 = result
    while (arg4 s< result_2)
    
    arg3 = var_8

int32_t* esi_5 = result_2 * 0x30 + arg3

if (esi_5 != arg5)
    result = sub_52e3c0(esi_5, arg5, 0, 0xffffffff)

if (&esi_5[6] == &arg5[6])
    return result

return sub_52e3c0(&esi_5[6], &arg5[6], 0, 0xffffffff)
