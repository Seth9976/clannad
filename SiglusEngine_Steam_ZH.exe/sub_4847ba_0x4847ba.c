// 函数: sub_4847ba
// 地址: 0x4847ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void* edi_1 = arg1
void* ecx = *(edi_1 + 0x24)

if (*(ecx + 0x5d) != 0)
    return 0x88760384

if (arg7 == 0)
    return 0x88760385

int32_t result = sub_4613e7(ecx, arg2, &arg1)

if (result s>= 0)
    int128_t* const eax = arg4
    
    if (eax == 0)
        eax = &data_aac190
    
    result = sub_484673(arg1, *(edi_1 + 0x24), arg3, eax, arg5, arg6, &arg1)
    
    if (result s>= 0)
        void* esi_1 = arg1
        int32_t eax_2 = neg.d(esi_1)
        arg1 = sbb.d(eax_2, eax_2, esi_1 != 0) & (esi_1 + 4)
        bool cond:0_1 = sub_48647e(edi_1 + 0x28, &arg1) == 0
        int32_t eax_6 = *esi_1
        
        if (cond:0_1)
            (*(eax_6 + 8))(esi_1)
            return 0x8007000e
        
        (*(eax_6 + 4))(esi_1)
        *arg7 = esi_1
        return 0

return result
