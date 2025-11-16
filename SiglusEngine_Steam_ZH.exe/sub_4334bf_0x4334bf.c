// 函数: sub_4334bf
// 地址: 0x4334bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1
void* esi = arg2
int32_t edi
int32_t var_18 = edi
var_8 = *(esi + 0x40)
void*** ebx = nullptr
int32_t result = 0
void* arg_4
*(esi + 0x14) = sub_42f997(arg1, arg_4, &var_8, &arg_4)

if (*(*(esi + 0x2c) + 0x28) != 0)
    goto label_4335b0

void*** eax_3 = sub_42cfa1(0x50)

if (eax_3 != 0)
    ebx = sub_46beac(eax_3)

int32_t eax_7

if (ebx != 0)
    eax_7 = (*(**(*(esi + 0x2c) + 0x20) + 4))()
    ebx[4] = eax_7

if (ebx == 0 || eax_7 == 0)
    return 0x8007000e

__builtin_memcpy(&ebx[0xc], *(esi + 0x38), 0x20)
int32_t edi_2 = 0

if (arg_4 u> 0)
    bool cond:1_1
    
    do
        void*** eax_8 = sub_42cfa1(0x14)
        void*** esi_2
        
        if (eax_8 == 0)
            esi_2 = nullptr
        else
            esi_2 = sub_46b5ec(eax_8)
        
        if (esi_2 == 0)
            return 0x8007000e
        
        void*** eax_10 = sub_42cfa1(0x40)
        void*** eax_11
        
        if (eax_10 == 0)
            eax_11 = nullptr
        else
            eax_11 = sub_46bfb3(eax_10)
        
        if (eax_11 == 0)
            return 0x8007000e
        
        esi_2[2] = eax_11
        edi_2 += 1
        cond:1_1 = edi_2 u< arg_4
        esi_2[3] = ebx[8]
        ebx[8] = esi_2
    while (cond:1_1)

esi = arg2
var_c = ebx[8]
result = sub_42fad0(&var_c, *(*(esi + 0x2c) + 0x20), &ebx[5], &ebx[6])

if (result s>= 0)
    *(*(esi + 0x2c) + 0x28) = ebx
label_4335b0:
    void* eax_20 = *(*(esi + 0x2c) + 0x28)
    
    if (*(eax_20 + 4) != 0xd)
        return 0x80004005
    
    while (*(eax_20 + 0x1c) == 0)
        void* ecx_4 = *(eax_20 + 0x20)
        
        if (ecx_4 == 0)
            break
        
        if (*(ecx_4 + 4) != 1)
            break
        
        void* ecx_5 = *(ecx_4 + 8)
        
        if (ecx_5 == 0)
            break
        
        if (*(ecx_5 + 4) != 0xd)
            break
        
        eax_20 = ecx_5
    
    if (*(eax_20 + 0x1c) != 0)
        return 0x80004005
    
    void* eax_21 = *(eax_20 + 0x20)
    
    if (eax_21 == 0 || *(eax_21 + 4) != 1)
        return 0x80004005
    
    *(esi + 0x1c) = eax_21

return result
